#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[m][n];
	for(int i=0;i<n;i++)//�����У� 
	{
		for(int j=0;j<m;j++)//������ 
		{
			scanf("%d",&a[j][i]);	
		}
	}
	for(int i=(m-1);i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
			if(j!=n-1)
			{
				printf(" ");
			}
			else if(i!=0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
/*
1)80�� 

*/
