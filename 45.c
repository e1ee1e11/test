#include <stdio.h>

int func_round(double input);

int main()
{
	printf("%d, %d, %d, %d\n",func_round(4.566),func_round(3.14159),func_round(999.9),func_round(0.00001));
	return 0;
}

int func_round(double input)
{
	return (int)(input+0.5);
}
