#include<iostream>
#include<cstdio>
#include<algorithm> 
using namespace std;
int main()
{
	int n=10,m=10;
	char aa[n][m];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			aa[i][j]='.';	
		}
		
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(j!=(m-1))
			printf("%c ",aa[i][j]);
			else
			printf("%c",aa[i][j]);		
		}
		
		if(i!=(n-1))
		printf("\n");
		
	}
	
	
	return 0;
}

//��������	char aa[n][m]={'.'};��
//����ά���鸳ֵ�ķ�ʽ���У����뿼���������� 
/// ��ʱ��֪�������Ծ���forѭ����ʼ������ 
