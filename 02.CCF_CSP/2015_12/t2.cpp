#include<cstdio>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int aa[n][m]={};//�޸Ĵ�1��{0}��Ϊ��{} 
	
	int test[n][m]={};// �޸Ĵ�2��{0}��Ϊ��{} 
	
	for(int i=0;i<n;i++)   
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&aa[i][j]);
		}
		
		
		for(int k=1;k<(m-1);k++)
		{
			if((aa[i][k-1]==aa[i][k])&&(aa[i][k]==aa[i][k+1]))
			{
				test[i][k-1]=aa[i][k];
				test[i][k]=aa[i][k];
				test[i][k+1]=aa[i][k];
			}	
		}
		
	}
	
	
	for(int i=0;i<m;i++)   
	{
		for(int j=1;j<(n-1);j++)
		{
			if((aa[j-1][i]==aa[j][i])&&(aa[j][i]==aa[j+1][i]))
			{
				test[j-1][i]=aa[j][i];
				test[j][i]=aa[j][i];
				test[j+1][i]=aa[j][i];
			}		
		}
			
	}
	
	
	for(int i=0;i<n;i++)   
	{
		for(int j=0;j<m;j++)
		{
			if(test[i][j]!=0)
			{
				aa[i][j]=0;	
			}
		}
		
	}
	
	
	for(int i=0;i<n;i++)   
	{
		for(int j=0;j<m;j++)
		{
			if(j!=(m-1))
			printf("%d ",aa[i][j]);
			else
			printf("%d",aa[i][j]);
		}
		
		if(i!=(n-1))
		printf("\n");
		
	}
	
	return 0;
	
}

//wei�޸�ǰ��һ�������Ĳ��Ϸ����ݣ�(ֻ��60��)

//3 3
/*
1 2 1
1 3 2
1 1 1
0 2 0
0 3 2
0 0 0
*/ 

//�޸Ĵ�1,2��{0}��Ϊ��{}  
//�ѵ�����Ϊ�Ǹ������ʼ����ʱ���ԭ�򣿣��� 
