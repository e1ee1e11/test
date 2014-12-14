#include <stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a=5,b=10;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	swap(p1, p2);
	printf("%d, %d\n",a,b);
	return 0;
}
