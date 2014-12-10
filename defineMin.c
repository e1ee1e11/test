#include <stdio.h>

#define Min(A,B) ((A)<=(B)?(A):(B))
#define Max(A,B) (A>=B?(A):(B))

int main()
{	
	printf("%d, %d\n",Min(5,4),Max(5,4));
	
	return 0;
}
