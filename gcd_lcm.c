#include <stdio.h>
int gcd(int a, int b)
{
	int d;
	for(d=a;!(a%d==0 && b%d==0);d--);
	return d;
}

int lcm(int a, int b)
{
	int m;
	for(m=a;!(m%a==0 && m%b==0);m++);
	return m;
}

int main()
{
	int a=15, b=65;
	printf("%d, %d\n",gcd(a,b),lcm(a,b));
	return 0;
}
