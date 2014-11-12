#include <stdio.h>

void main(void)
{
	FILE *fp;
	int n;
	fp = fopen("input.txt", "r");
	fscanf(fp, "%d",&n);
	printf("%d\n",n);
}
