#include<stdio.h>
int main()
{
	int year;
	printf("Ente the year::");
	scanf("%d",&year);
	if( (year%4==0) && (year%100!=0) || (year%400==0))
	printf("Leap year");
	else
	printf("Not A leap Year");
}
