#include <stdio.h>

#define A ""
#define B 30*30

typedef struct node
{
	char data[5];
	struct node *link; 	
}NODE;

void func();

void main(void)
{	char a[5];
	int b[5];
	char s[5]= "abcd";
	int *p;
	int **ptr;
	int *parray[5];
	printf("int = %d byte\n", sizeof(int));
	printf("float = %d byte\n", sizeof(float));
	printf("char = %d byte\n", sizeof(char));
	printf("double = %d byte\n", sizeof(double));
	printf("long = %d byte\n", sizeof(long));
	printf("char a[5] = %d byte, int a[5] = %d byte\n", sizeof(a), sizeof(b));
	printf("s = %d byte\n", sizeof(s));
	printf("A = %d byte\n", sizeof(A));
	printf("B = %d byte\n", sizeof(B));
	printf("int* = %d byte\n", sizeof(int*));
	printf("p = %d byte\n", sizeof(p));
	printf("ptr = %d byte\n", sizeof(ptr));
	printf("parray = %d byte\n", sizeof(parray));
	printf("func() = %d byte\n", sizeof(func()));
	printf("NODE = %d byte\n", sizeof(NODE));
}	

void func()
{	
	printf("hi\n");
	//return 0;
}
