#include<stdio.h>
int main()
{
	int cp,sp,Profit,Loss;
	printf("Enter the pricess:::");
	scanf("%d %d",&sp,&cp);
	if(sp>cp)
	{
		Profit=sp-cp;
		printf("Profit =%d",Profit);
	}
	else
	{
		Loss=cp-sp;
		printf("Loss =%d",Loss);
	}
	
}
