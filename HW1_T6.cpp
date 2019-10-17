#include "pch.h"
#include <stdio.h>

int main()
{
	int counter = 0;
	int operationCounter = 0;
	bool isSimilar = true;
	const int stringSize1 = 13;
	const int stringSize2 = 4;
	char string1[stringSize1] = "bckbcdbqbckc";
	char string2[stringSize2] = "bck";

	for (int i = 0; i < stringSize1 - stringSize2 + 1; i++)
	{
		while (isSimilar && operationCounter < stringSize2 - 1)
		{
			if (string1[i + operationCounter] != string2[operationCounter])
			{
				isSimilar = false;
			}
			operationCounter++;
		}
		if (isSimilar)
		{
			counter++;
		}
		operationCounter = 0;
		isSimilar = true;
	}
	printf("Answer:%i", counter);
	return 0;
}
