#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if((num%5==0) && (num%11==0))
	printf("Divisible by Both");
	else
	printf("Not Divisible by Both");
}
