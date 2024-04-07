#include<stdio.h>
int main()
{                               // toggle means 1 to 0 or 0 to 1
	int num,n,newnum;
	
	printf("Enter the number::");
	scanf("%d",&num);
	printf("Enter the bit::");
	scanf("%d",&n);
	
	newnum= num ^ (1<<n);
	
	printf("This newnum::%d",newnum);
}
