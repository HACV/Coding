#include<stack>
#include<iostream>
#include<cstdio>
using namespace std;
const int maxn=100000+5;

char test[maxn];
int num[maxn*2];//���У�1��ʾ��ջ��0��ʾ��ջ 
int tag=0;//���ٸ��ַ�
int input;
int output; 

int pre=0;//��ǰ����ֵ�ĵ� 
	
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

//input���µĿ�����ջ����
//output�µĿ��Գ�ջ����
//tag����ĸ����Ŀ 
void DFS(int input, int output)
{
	if((tag-input)>(tag-output)) //�� 
	{
		pre++;
		num[pre]=0;
		output--;

		DFS(input, output);
	}
	
	if(input>0)//�� 
	{
		pre++;
		num[pre]=1;
		input--;

		DFS(input, output);
	}
	
	if((num[pre]==0)&&(output==0))
	{
		solution(test, num, tag);
//		cout<<"OKKKKK"<<endl;
		pre--;
		output++;
		return;
	}
	


	if((num[pre]==0)&&(output!=0))
	{
		pre--;
		++output;
		return;
	}
	else if(num[pre]==1)
	{
		pre--;
		++input;
		return;
	}
	

}


int main()
{
	gets(test);
	for(int i=0; test[i]!='\0'; i++)
	{
		tag++;
	}
	
	input=tag;
	output=tag; 
	
	DFS(input, output);
	
	printf("��������"); 
	
	return 0;
 } 
