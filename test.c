#include <stdio.h>

main()
{
	char c = 'a' ;
	char b = 110 ;
	char *a = &c ;
	char *d = &b ;
	printf("a=%p, *a=%d\n", a, *a);
	printf("b=%p, b=%d\n", b, b);
	printf("c=%p, c=%d\n", c, c);
	printf("d=%p, *d=%d\n", d, *d);
	printf("-----------------------------------------------------1\n");
	*a = b;
	printf("a=%p, *a=%d\n", a, *a);
        printf("b=%p, b=%d\n", b, b);
        printf("c=%p, c=%d\n", c, c);
        printf("d=%p, *d=%d\n", d, *d);
	printf("-----------------------------------------------------2\n");
	a++;
	printf("a=%p, *a=%d\n", a, *a);
        printf("b=%p, b=%d\n", b, b);
        printf("c=%p, c=%d\n", c, c);
        printf("d=%p, *d=%d\n", d, *d);
        printf("-----------------------------------------------------3\n");
	a = &b;
	printf("a=%p, *a=%d\n", a, *a);
        printf("b=%p, b=%d\n", b, b);
        printf("c=%p, c=%d\n", c, c);
        printf("d=%p, *d=%d\n", d, *d);
        printf("-----------------------------------------------------4\n");
	b--;
	printf("a=%p, *a=%d\n", a, *a);
        printf("b=%p, b=%d\n", b, b);
        printf("c=%p, c=%d\n", c, c);
        printf("d=%p, *d=%d\n", d, *d);
        printf("-----------------------------------------------------5\n");
	*d = 110;
	printf("a=%p, *a=%d\n", a, *a);
        printf("b=%p, b=%d\n", b, b);
        printf("c=%p, c=%d\n", c, c);
        printf("d=%p, *d=%d\n", d, *d);
        printf("-----------------------------------------------------6\n");
	//printf("*a=%c, b=%c, c=%c, d=%c\n", *a, b, c, *d);
}
