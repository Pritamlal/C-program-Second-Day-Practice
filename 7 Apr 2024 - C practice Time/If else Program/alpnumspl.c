#include<stdio.h>
int main()
{
	char word;
	printf("Enter something::");
	scanf("%c",&word);
	if((word>='a' && word<='z') || (word>='A' && word<='Z'))
	printf("it is come under word");
	else if(word>='0' && word<='9')
	printf("it comes under number");
	else
	printf("special character");
}
