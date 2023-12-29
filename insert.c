#include "main.h"

/**
* insert_student - Inserting a new student in the table
* @new_student: The data collected from Struct new student
* Return: New node with data
*/

node *insert_student(student new_student)
{
	// node *hashTable[TABLE_SIZE] = {NULL};
	int index = hash(new_student.name);

	node *new_node = malloc(sizeof(node));
	node *temp = new_node;

	if (new_node == NULL)
	{
		fprintf(stderr, "Unable to Malloc\n");
		exit(EXIT_FAILURE);
	}

	strcpy(new_node->key, new_student.name);
	new_node->data = new_student;
	new_node->next = NULL;
	if (hashTable[index] == NULL)
	{
		hashTable[index] = new_node;
	}
	else
	{
		while (temp != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	temp->next = new_node;

	return (new_node);
}
