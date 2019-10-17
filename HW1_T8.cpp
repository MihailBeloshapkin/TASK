#include "pch.h"
#include <stdio.h>

int main()
{
	int sizeOfArray = 0;
	int counter = 0;
	printf("Input size of array:\n");
	scanf_s("%i", &sizeOfArray);
	int *array = new int[sizeOfArray];
	printf("Input array:");
	for (int i = 0; i < sizeOfArray; i++)
	{
		scanf_s("%i", &array[i]);
		if (array[i] == 0)
		{
			counter++;
		}
	}
	printf("Number of null elements: %i", counter);
	delete []array;
	return 0;
}
