#include<stdio.h>
int main()
{
	int num1,num2,num3,res;
	
	printf("Enter the number::");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	res=(num1>num2 && num1>num3) ? num1 : (num2>num3)? num2 : num3;
	
	printf("\n Maximum of %d %d %d = %d",num1,num2,num3,res);
}
