#include <stdio.h>

void main(void)
{
	int a=5;
	char b;
	a = a++ + ++a;
	printf("%d\n",a);
}
