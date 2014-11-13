#include <stdio.h>

char *mystrcpy(char *dst, const char *src);
char *mystrncpy(char *dst, const char *src, int n);


void main(void)
{
	char str1[20]="hello world";
	char str2[20], str3[20];
	mystrcpy(str2,str1);
	printf("str1:%s, str2:%s\n", str1, str2);
	mystrncpy(str3, str1 ,1);
	printf("str3:%s\n", str3);
}

char *mystrcpy(char *dst, const char *src)
{
	while((*dst++=*src++)!='\0');
	//return dst;
}

char *mystrncpy(char *dst, const char *src, int n)
{
	while( n-- && (*dst++=*src++)!='\0');
    	*dst = '\0';
}

