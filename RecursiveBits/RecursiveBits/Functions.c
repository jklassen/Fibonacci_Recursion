#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "Functions.h"

void PrintBits(int x, int pos)
{
	int size = sizeof(x)*8;
	if (pos >= size) return;

	PrintBits(x, pos + 1);
	printf("%d", ((x >> pos) & 1));

	if (pos % 4 == 0 && pos > 0)
		printf(" ");
}
void PrintBitsReversed(int x, int pos)
{
	int size = sizeof(x) * 8;
	if (pos >= size) return;

	if (pos % 4 == 0 && pos > 0)
		printf(" ");

	printf("%d", ((x >> pos) & 1));
	PrintBitsReversed(x, pos + 1);
}

void PrintFibonacci(int pos, int f1, int f2)
{
	if (f2 == 0) f2 = 1;
	if (pos == 0)
	{
		printf("%d", f2);
		return;
	}
	PrintFibonacci(pos - 1, f2, f2 + f1);
}

unsigned int Fibonacci(unsigned int n)
{
	if (n <= 1)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void blah(int pos)
{
	PrintFibonacci(pos, 0, 0);
}