#include<stdio.h>
unsigned int align_n(unsigned int size, int n)
{
	
	
	unsigned int test=(1<<n)-1;//��0-nλȫ��1 
	
	unsigned int temp=size;//���� 
	temp&=(~(test<<(32-n))); //��õ�0-nλ��λ

	
	unsigned int out;
	
	if(temp&test)//�����1 
	{

		size&=(~test);//ĩβ��0 
		
//		printf("size=%d\n",size);
		if(size&(1<<n)) 
		{
//			printf("OK");//�������� 
			
			out=size+(1<<n);
		}
		else
		{
			out=size^(1<<n);//�������� ,����Ǹ��ط���0���ԣ�Ҫ��1Ҫ��λ 
		}
		
//		printf("OK");
		
		return out;
	}
	
	
	
	out=size&=(~test);;
	return out;
	
}

int main()
{
	unsigned int size,out;
	int n;
	scanf("0x%x,%d",&size,&n);
//	printf("size=%x,n=%d\n",size,n); 
	out=align_n(size,n);
	
	printf("0x%x",out); 
	return 0; 
} 
