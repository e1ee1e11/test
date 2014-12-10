#include <stdio.h>
#include <string.h>
void strreserve(char *src)
{
	int i;
	for(i=strlen(src)-1;i>=0;i--)
	printf("%c",src[i]);
	printf("\n");
}

int main()
{	
	char str[30];
	gets(str);
	strreserve(str);
	return 0;
}
