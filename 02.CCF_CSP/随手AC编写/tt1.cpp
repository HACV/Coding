#include<iostream>
#include<set>
#include<cstdio>
using namespace std; 

int main()
{
	int n;
	scanf("%d",&n);
	int aa;
	int num[1001]={0};
	for(int i=0;i<n;i++)
	{
		scanf("%d",&aa);
		num[aa]++;
	}
	set<int> st;
	
	for(int i=0;i<1001;i++)
	{
		if(num[i]!=0)
		st.insert(num[i]); 	
	}
	
	set<int>::iterator it=st.end() ;
	
	it--;
	
	while(it!=st.begin())
	{
		for(int i=0;i<1001;i++)
		{
		if(num[i]==(*it))
		printf("%d %d\n",i,*it);
		}
		it--;
	}
	
//	for(int i=0;i<1001;i++)
//	{
//	if(num[i]==(*it))
//	printf("%d %d\n",i,*it);//������û��ע���ʽ�� 
//	}
	int sum=0;
	for(int i=0;i<1001;i++)
	{
		if(num[i]==(*it))
		sum++;
	}
	
	for(int i=0;i<1001;i++)
	{
		if(num[i]==(*it)&&sum!=1)
		{
		printf("%d %d\n",i,*it);
		sum--;
		}
		else if(num[i]==(*it)&&sum==1)
		{
		printf("%d %d",i,*it);
		sum--;
		}
		
	}
	
	
	return 0;
}

// ��һ���ύ��������û��ע���ʽ�� 
/*
�������޸���һ�Σ� 


*/ 
