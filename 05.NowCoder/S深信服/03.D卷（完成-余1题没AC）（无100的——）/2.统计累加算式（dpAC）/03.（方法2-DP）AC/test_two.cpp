#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dp[n+1];

    //��ʼ��Ϊ1,��ʾn���Ϊn��1,��һ�ֲ�ַ���
    for(int i=0;i<=n;i++)
    {
        dp[i]=1;
    }

    int k=2;
    while(k<=n)
    {
        //��һ��ѭ����ʾ��ͨ��������1���ϲ�Ϊ2���õ����µķ�����
        //��Ϊֻ�д���2�������ܹ�ʹ�øò�ַ���������j��ʼΪ2
        //�Ժ��ַ���Ϊ4��8��16
        for(int j = k;j<=n;j++)
        {
            //ԭ�еķ��������������µĲ�ַ�������
            //���
            dp[j]+=dp[j-k];
        }

        k*=2;
    }
    cout<<dp[n]<<endl;
}
