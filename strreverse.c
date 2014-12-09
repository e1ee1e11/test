#include <stdio.h>
#include <string.h>
void strreserve(char *str)
{
	int i;
	for(i=strlen(str)-1;i>=0;i--)
	printf("%c",str[i]);
	printf("\n");
}

int main()
{	
	char str[20];
	gets(str);
	strreserve(str);
	return 0;
}
