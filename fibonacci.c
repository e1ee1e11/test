#include <stdio.h>
int main()
{
	int a[50],input,i;
	
	scanf("%d",&input);
	
	a[0]=0;
	a[1]=1;
	if(input>=2)
	{
		for(i=2;i<=input;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		for(i=0;i<=input;i++)
		printf("%d ",a[i]);
		printf("\n");	
	}
	else if(input==1 || input==0)
	{
		for(i=0;i<=input;i++)
		printf("%d ",a[i]);
		printf("\n");
	}
	else
	printf("wrong\n");
	return 0;
}
