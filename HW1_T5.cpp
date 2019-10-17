#include "pch.h"
#include <stdio.h>

int main()
{
	int counter = 0;
	const int sizeOfString = 9;
	bool isBalance = true;
	char string[] = "()()(())";
	for (int i = 0; i < sizeOfString; i++)
	{
		if (counter < 0)
		{
			isBalance = false;
		}
		switch (string[i])
		{
		case '(':
			counter++;
			break;
		case ')':
			counter--;
			break;
		default:
			break;
		}
	}
	if (counter == 0 && isBalance)
	{
		printf("The string is balanced");
	}
	else
	{
		printf("The string is not balanced");
	}
}
