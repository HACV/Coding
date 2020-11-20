#include<stack>
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=100000+5;

char test[maxn];
int num[maxn*2];//���У�1��ʾ��ջ��0��ʾ��ջ 
int tag=0;//���ٸ��ַ�

void solution(char test[], int num[], int tag)
{
	stack<char> res;
	int temp=0;
	for(int i=1; i<=tag*2 ;i++)
	{
		if(num[i])
		{
			res.push(test[temp++]);
		}
		else
		{

			printf("%c",res.top());
			res.pop();
		}
	}
	
	printf("\n");
}


int demo()
{
	int input=0;
	int output=0;
	int k=1;
	while((input!=tag)&&(output!=tag))
	{
		if(k>2*tag)
		{
			return 0;
		}
		
		if(num[k]==1)
		{
			input++;
		}
		else
		{
			output++;
		}
		
		if(output>input)
		{
			return 0;
		}
		
		k++;
	}
	
	return 1;
}

int main()
{
	gets(test);
	for(int i=0; test[i]!='\0'; i++)
	{
		tag++;
	}

	for(int i=1; i<=2*tag ; i+=2)
	{
		num[i]=1;
	}
	
	solution(test, num, tag);
	while(next_permutation(num+1,num+2*tag+1))
	{
		if(demo())
		{
			solution(test, num, tag);
		}
		
	}
	//����ȫ���еĻ������ã������Ը���������������break
	//	����2��ջ+DFS��Ȼ���������֦ 
	//	printf("��������"); 
	
	return 0;
 } 
