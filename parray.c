#include <stdio.h>

int main()
{
	int a[3][4]={{88,10,11,12},{77,21,22,23},{66,31,32,33}};
	int *p,i,j;
	p= a;
	/*for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d, ",a[i][j]);
		printf("\n");
	}*/
	p=p+4;
	printf("%d,\n",*p);
	return 0;
}
