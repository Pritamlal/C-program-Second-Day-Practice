#include<stdio.h>
int main()
{
	int n,num,bit;
	printf("Enter the number::");
	scanf("%d",&num);
	printf("Enter the bit::");
	scanf("%d",&n);
	
	bit = (num>>n)&1;
	printf("The %d bit is set to %d",n,bit);
}
