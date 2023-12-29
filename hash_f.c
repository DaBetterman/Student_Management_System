#include "main.h"

/**
* hash- Algorithm for converting string to int
* @keys: The string collected from input
* Return: An int
*/

int hash(char *keys)
{
	int value = 0;

	int i = 0;

	int count = strlen(keys);

	for (i = 0; i < count; i++)
	{
		value += keys[i];
	}
	return (value % 10);
}
