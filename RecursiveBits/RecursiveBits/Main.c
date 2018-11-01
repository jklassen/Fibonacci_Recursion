#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "Functions.h"


int main(int argc, char** argv)
{
	if (argv[1] == NULL) return;

	int x = 40;// strtol(argv[1], NULL, 10);
	PrintBits(x, 0);
	printf("\n%d\n", x);
	PrintBitsReversed(x, 0);
	printf("\n");
	blah(x);
	//printf("New Code: %d\n", Fibonacci(x));
	system("pause");
}

