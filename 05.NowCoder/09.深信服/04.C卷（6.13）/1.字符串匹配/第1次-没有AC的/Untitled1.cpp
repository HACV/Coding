#include <stdio.h>
#include <string.h>
#include <malloc.h>

int match(const char *str, const char *pattern)
{
    //TODO:
    int len_str=strlen(str);
    int len_pattern=0;
    
    int flag=0;//��ʾû��*�� 
    int i=0;
    while('\0'!=pattern[i])
    {
    	++len_pattern;
    	
    	if('*'==pattern[i])
    	{
    		flag=1;
		}
		++i;
	}
    
    
    if(0==flag)
    {
    	if(len_str!=len_pattern)
    	{
    		return -1;
		}
		else
		{
			i=0;
			
    		while('\0'!=pattern[i])
    		{
    			if(pattern[i]=='?')
    			{
    				++i;
    				continue;
				}
				else
				{
					if(pattern[i]==str[i])
					{
						++i;
						continue;
					}
					else
					{
						return -1;
					}
				}
				
			}
			
			return 0;
		}
		
	}
	else//��������*��ʱ�� 
	{
		if(len_str<len_pattern)
		{
			return -1;
		}
		else
		{
			//��1�γ��ԣ������⣬�������̰�Ĳ�����õĲ��� 
			//һ��*���ø㶨������Ҫ�Ƕ��*����ô�죿 
			for(int j=0; j<len_pattern ; ++j)
			{
				for(i=0; i<len_str ; ++i)
				{
					
				}
			}
			
			
			
		}
	}
    
}

int input(char **src, char **ptn)
{
    char buf[10240];
    
    *src = NULL;
    *ptn = NULL;
    if (fgets(buf, sizeof(buf), stdin) == 0)
        goto failed_;
    *src = strdup(buf);
    if (fgets(buf, sizeof(buf), stdin) == 0)
        goto failed_;
    *ptn = strdup(buf);
    return 0;
failed_:
    if (*src)
        free(*src);
    if (*ptn)
        free(*ptn);
    *src = NULL;
    *ptn = NULL;
    return -1;
}

int main(int argc, char *argv[])
{
    char *src = NULL;
    char *ptn = NULL;
    
    if (input(&src, &ptn) < 0) {
        fprintf(stderr, "error\n");
        return 0;
    }

    if (match(src, ptn) == 0) {
        printf("match\n");
    } else {
        printf("unmatch\n");
    }
    return 0;
}
