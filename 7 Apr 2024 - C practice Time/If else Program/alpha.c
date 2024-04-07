#include<stdio.h>
int main()
{
	char ch;
	printf("ENter the character:");
	scanf("%c",&ch);
	if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	printf("It is Alphabet yah");
	else
	printf("It is not Alphabet yah");
}

