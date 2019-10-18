#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

int dipRand(int minValue = 5, int maxValue = 50)
{
	return rand() % (maxValue - minValue + 1) + minValue;
}

void quickSort(int *numbers, int nose, int tail)
{
	int helper = 0;
	int indexOfElement = (nose + tail) / 2;
	int indexOfNose = nose - 1;
	int indexOfTail = tail + 1;

	if (nose >= tail)
	{
		return;
	}
	bool run = true;
	while (run)
	{
		indexOfNose++;
		while (numbers[indexOfNose] < numbers[indexOfElement])
		{
			indexOfNose++;
		}
		indexOfTail--;
		while (numbers[indexOfTail] > numbers[indexOfElement])
		{
			indexOfTail--;
		}

		if (indexOfNose < indexOfTail)
		{
			helper = numbers[indexOfTail];
			numbers[indexOfTail] = numbers[indexOfNose];
			numbers[indexOfNose] = helper;

			if (indexOfElement == indexOfNose)
			{
				indexOfElement = indexOfTail;
				++indexOfTail;
			}
			else if (indexOfElement == indexOfTail)
			{
				indexOfElement = indexOfNose;
				--indexOfNose;
			}
		}
		else
		{
			run = false;
		}
	}

	qSort(numbers, nose, indexOfElement - 1);
	qSort(numbers, indexOfElement + 1, tail);
}

int searchMostFrequent(int array[], int size)
{
	quickSort(array, size);
	int counter = 0;
	int max = 0;
	int value = array[0];
	for (int i = 0; i < size; i++)
	{
		if ()
	}
}
	

bool testHugeArray()
{
	bool isCorrectly = true;
	int sizeOfHugeArray = dipRand(10000, 15000);
	int *hugeArray = new int[sizeOfHugeArray];
	int mostFrequentElement = dipRand();
	for (int i = 0; i < sizeOfHugeArray; i++)
	{
		if (i % 2 == 0)
		{
			hugeArray[i] = mostFrequentElement;
		}
		else
		{
			hugeArray[i] = dipRand();
		}
	}
	if (searchMostFrequent(hugeArray, sizeOfHugeArray) != mostFrequentElement)
	{
		isCorrectly = false;
	}
	delete[] hugeArray;
	return isCorrectly;
}

bool testHugeValues()
{
	bool isCorrectly = true;
	int hugeValuesArray[] = { 10000003, 10000007, 10000007, 10000004, 10000007 };
	if (searchMostFrequent(hugeValuesArray, 5) != 10000007)
	{
		isCorrectly = false;
	}
	return isCorrectly;
}

int main()
{
	
	if (!testHugeArray() || !testHugeValues())
	{
		if (!testHugeArray())
		{
			printf("searchMostFrequent function Works incorrectly with big arrays\n");
		}
		if (!testHugeValues())
		{
			printf("searchMostFrequent function Works incorrectly with huge numbers\n");
		}
		return 0;
	}
	int size = dipRand();
	int *array = new int[size];
	printf("Input size of array:\n");
	scanf_s("%i", &size);
	if (size <= 0)
	{
		printf("Incorrect value if array size\n");
		return 0;
	}
	printf("Input array:\n");
	for (int i = 0; i < size; i++)
	{
		scanf_s("%i", &array[i]);
	}
	printf("Most frequent element is %i\n", searchMostFrequent(array, size));
	delete []array;
	return 0;
}
