#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number::");
	scanf("%d",&number);
	if(number==1)
	printf("sunday");
	else if(number==2)
	printf("Monday");
	else if(number==3)
	printf("Tuesday");
	else if(number==4)
	printf("Wednesday");
	else if(number==5)
	printf("Thursday");
	else if(number==6)
	printf("Friday");
	else if(number==7)
	printf("Saturday");
	else
	printf("Invalid");
}
