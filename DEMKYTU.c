#include <stdio.h>
#include <ctype.h> //include isalpha, is
#include <string.h> //include gets, strlen

int main()
{
	int i, alphacount, digitcount;
	char s[200];
	gets(s);
	
	alphacount = 0;
	digitcount = 0;
	for (i = 0; i < strlen(s); i++)
	{
		if (isalpha(s[i])) alphacount++;
		if (isdigit(s[i])) digitcount++;
	}
	printf("%d %d %d", alphacount, digitcount, strlen(s) - alphacount - digitcount);
}
