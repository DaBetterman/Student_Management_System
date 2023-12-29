#include "main.h"

node *hashTable[TABLE_SIZE] = {NULL};

/**
* main - where things start!
* Return: Zero on success
*/

int main(void)
{
	FILE *doc;
	char name[50];

	student new_student;
	node *collect;

	new_student = create_person();
	collect = insert_student(new_student);

	printf("This is the name %s\n", collect->key);

	doc = save_in_file();

	fprintf(doc, "Name: %sSurname: %sAge: %d\nAddress: %sSex: %s", new_student.name,
	new_student.surname, new_student.age, new_student.address, new_student.gender);
	printf("written successfully\n");

	printf("Who are you looking for?\n");
	fgets(name, sizeof(name), stdin);
	get_student(name, new_student);

	fclose(doc);
	free_person(new_student);
	return (0);
}
