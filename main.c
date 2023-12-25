#include "main.h"

/**
* main - where things start!
* Return: Zero on success
*/

int main(void)
{
	int result = 0;
	FILE *doc;
	student new_student;

	new_student = create_person();

	doc = save_in_file();

	fprintf(doc, "Name: %sSurname: %sAge: %d\nAddress: %sSex: %s", new_student.name,
	new_student.surname, new_student.age, new_student.address, new_student.gender);
	printf("written successfully\n");


	fclose(doc);
	return (0);
}
