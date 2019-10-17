#include <iostream>
void swapArray(int array[], int pos1, int pos2)
{
	int counter = 0;
	for (int i = pos1; i < (pos1 + pos2) / 2; i++)
	{
		const int tmp = array[i];
		array[i] = array[pos2 - counter];
		array[pos2 - counter] = tmp;
		counter++;
	}
}

int main()
{
	int m = 0;
	int n = 0;
	printf("Input m:\n");
	scanf_s("%i", &m);
	printf("Input n:\n");
	scanf_s("%i", &n);
	int *array = new int[m + n];
	printf("Input array:\n");
	for (int i = 0; i < m + n; i++)
	{
		scanf_s("%i", &array[i]);
	}
	swapArray(array, 0, m - 1);
	swapArray(array, m, m + n - 1);
	swapArray(array, 0, m + n - 1);
	for (int i = 0; i < m + n; i++)
	{
		printf("%i, ", array[i]);
	}
	delete []array;
	return 0;
}