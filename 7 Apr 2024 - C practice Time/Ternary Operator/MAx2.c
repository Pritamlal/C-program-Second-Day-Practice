#include<stdio.h>
int main()
{
	int a,b,res;
	printf("Enter the number::");
	scanf("%d %d",&a,&b);
	
	res= a>b? a:b;
	printf("%d",res);
}
