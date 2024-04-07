#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter the number of Num1:");
	scanf("%d",&num1);
	printf("Enter the number of Num2:");
	scanf("%d",&num2);
	printf("Enter the number of NUm2:");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3)
	printf("Num1 is greater");
	else if(num2>num1 && num2>num3)
	printf("Num2 is greater");
	else
	printf("Num3 is greater");
	
	
}
