#include <stdio.h>

int sum(int n);

void main(void)
{
	FILE *fp1, *fp2;
	int n, N;
	fp1 = fopen("input.txt", "r");
	fscanf(fp1, "%d",&n);
	fclose(fp1);
	N = sum(n);
	fp2 = fopen("output.txt", "w");
	fprintf(fp2, "%d\n", N);

}

int sum(int n)
{
	if(n==1)
	{
		return n;
	}
	else
	{
		return (n + sum(n-1));
	}
	
}
