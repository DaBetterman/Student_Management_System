#include "main.h"


FILE *save_in_file()
{
	FILE *temp;

	temp = fopen("students.txt", "a");
	if (temp != NULL)
	{
		if (ftell(temp) > 0)
		{
			fprintf(temp, "\n");
		}
	}
	else
	{
		fprintf(stderr, "Error unable to create document\n");
	}
	return (temp);
}
