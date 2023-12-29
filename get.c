#include "main.h"

/**
* get_student - Function to get the student.
* @string: The name to search for
* @new_student: The student data
* Return: Returns the found student from the data collected.
*/

void get_student(char *string, student new_student)
{
	int found = 0;


	node *collect = malloc(sizeof(node));

	if (collect == NULL)
	{
		fprintf(stderr, "Memory allocation error for collect\n");
		exit(EXIT_FAILURE);
	}

	int index = hash(string);

	node *current = hashTable[index];


	strcpy(collect->key, new_student.name);

	printf("This is the content of current->key %s and string is %s\n", current->key, string);

	while (current != NULL)
	{
		if (strcmp(current->key, new_student.name) == 0)
		{
			printf("Found %s\n", current->key);
			found = 1;
			break;
		}
		current = current->next;
	}

	if (!found)
	{
		printf("%s not found\n", string);
	}
	free(collect);
}
