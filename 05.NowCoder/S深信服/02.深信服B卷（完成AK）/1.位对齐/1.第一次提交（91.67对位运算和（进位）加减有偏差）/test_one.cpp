#include<stdio.h>
unsigned int align_n(unsigned int size, int n)
{
	
	
	unsigned int test=(1<<n)-1;//��0-nλȫ��1 
	
	unsigned int temp=size;//���� 
	temp&=(~(test<<(32-n))); //��õ�0-nλ��λ

	
	unsigned int out;
	
	if(temp&test)//�����1 
	{

		size&=(~test);
		
//		printf("size=%d\n",size);
		out=size^(1<<n);
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
