#include <stdio.h>

void Res(void)
{
	printf("start\n");
	Res();
	printf("End\n");
}
int main()
{
	Res();
	return 0;
}
