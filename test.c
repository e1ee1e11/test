#include <stdio.h>

void main(void)
{
	int (*a)(int);
	int *ptr;
	int n=5;
	ptr = &n;
	n=6;
	printf("%d\n",*ptr+1);
	printf("%d\n", n);
}
