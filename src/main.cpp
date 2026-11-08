#include <stdio.h>
#include <math.h>

typedef unsigned long ulong;

int main(int argc, char** argv)
{
	unsigned int x = pow(2, 31) - 1;
	printf("%d\n", x);

	return 0;
}