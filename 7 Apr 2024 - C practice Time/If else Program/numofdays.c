#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number::");
	scanf("%d",&num);
	
	if(num==1){
	
	printf("January\t");
	printf("31 days");}
	else if(num==2){
	
	printf("Febauary");
	printf("28 days\t");
	}
	else if(num==3){
	
	printf("March\t");
	printf("31 days");
}
	else if(num==4)
	{
	printf("April\t");
	printf("30 days");
	}
	else if(num==5)
	{
	printf("May\t");
	printf("31 days");
	}
	else if(num==6)
	{
	
	printf("June");
	printf("30days");}
	else
	printf("other not comes under June month:");
}
