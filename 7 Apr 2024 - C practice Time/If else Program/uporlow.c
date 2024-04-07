#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character::");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	printf("Lowercase");
	else if(ch>='A' && ch<='Z')
	printf("Uppercase");
	else
	printf("Others");
}
