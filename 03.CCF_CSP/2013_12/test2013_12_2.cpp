#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char a[13];
	int b[13]={0};
	char c;
	for(int i=0;i<13;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]!='-')
		{
			c=a[i];
			b[i]=(int)c-48;//�����ǿ������ת������Ϊ�ַ�0-9��Ӧ��ASCII��Ϊ48-57 
		}
	}
	int sum=0;
	int j=1;
	int num;
	for(int i=0;i<12;i++)
	{
		if(a[i]!='-')
		{
			sum=sum+b[i]*j;
			++j;
		}
	}
	
	int k;
	k=sum%11;
	char cc='n';
	if(k==10)
	{
		cc='X';
	}
	
	if(k==(int)a[12]-48)
	{
		printf("Right");
	}
	else if(cc==a[12])
	{
		printf("Right");//�б�ΪX����� 
	}
	else
	{
//		for(int i=0;i<12;i++)
//		{
//		printf("%c",a[i]);
//		}
//		printf("%c",(char)(k+48));
		for(int i=0;i<12;i++)
	{
		if(a[i]!='-')
		{
		printf("%d",b[i]);
		}
		else
		printf("%c",a[i]);
	}
	
	if(k==10)
	{
		printf("%c",cc);
	}
	else
	printf("%d",k);
	}	
	return 0;
}



/*���ⱨ�� 
 ���ͣ�
 ��ģ���⣨����ȵ�һ��࣬��ʽ��Ҫע�⣩ 
 
 ע���+���ߣ� 
 1.�����������ǡ�char������ô���int���͡� 
 2.�����������ǡ�ISBN�����9λ���֡��������ʽ���ԣ����Բ������֣��� 
 3.�������Ϊ10����ʶ����Ϊ��д��ĸX������������۲�ȫ��Ҳ���²������֣� 
  
 
 ˼·��
 1��������Ϊֱ��ģ�� 

 */
