#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int sum=0;
	
	for(string::iterator it=str.begin();it!=str.end();it++)
	{
		sum=sum+(*it-'0');
	}
	printf("%d",sum);
	
	return 0;
}

//��Ȼ��Ŀ��˵�Ǹ�������һ�����֣���������cin���뵽string�����У�ҲOK
//��100�� 
