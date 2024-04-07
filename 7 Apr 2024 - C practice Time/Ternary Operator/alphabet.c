#include<stdio.h>
int main()
{
	char letter;
	printf("Enter the character::");
	scanf("%c",&letter);
	
	(letter>='a' && letter<='z')||(letter>='A' && letter<='Z')?printf("Alphabet Yah"):printf("Not Alphabet Yeh");
}
