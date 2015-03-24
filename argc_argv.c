#include <stdio.h>
/*****************

$ ./a.out hello world

argc=3
argv[0]=./a.out
argv[1]=hello
argv[2]=world

*******************/

int main(int argc, char *argv[])
{
	int i;
	printf("argc=%d\n",argc);
	for(i=0;i<argc;i++)
	printf("argv[%d]=%s\n",i ,argv[i]);
	return 0;
}
