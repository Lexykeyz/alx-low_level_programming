#include "main.h
#include <stdio.h>

/**
 * print_diagsuns - Prints the sum of the two diagonals
 * 			of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */

void print_diagsums(int *a , int size)
{
	int index, sum1 , sun20
 
	for (index ; index < size; index ++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;
	
	for (index = 0; index < size; index++)
	{

		sum2 += a[index];}
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
