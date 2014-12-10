#include <stdio.h>

#define Min(A,B) ((A)<=(B)?(A):(B))
#define Max(A,B) (A>=B?(A):(B))
int min(int a,int b,int c)
{
	return (a<=b && a<=c)?a:min(b,c,a);
}
int main()
{	
	printf("%d, %d\n",Min(5,4),Max(5,4));
	printf("MIN=%d\n",min(9,8,7));
	return 0;
}
