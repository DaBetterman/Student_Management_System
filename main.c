#include "main.h"

/**
* main - where things start!
*
*
*/

int main (void)
{
	student person1; /*name, age, address, gender*/
	ssize_t  count;

	printf("What is your Name\n");
	getline(&person1.name, &count, stdin);

	printf("What is your Surname\n");
	getline(&person1.surname, &count, stdin);

	printf("What is your Age\n");
	scanf("%d", &person1.age);

	printf("What is your Address\n");
	getchar();
	getline(&person1.address, &count, stdin);

	printf("What is your Sex\n");
	getline(&person1.gender, &count, stdin);

	printf("Name: %sSurname: %sAge: %d\nAddress: %sSex: %s", person1.name,
	person1.surname, person1.age, person1.address, person1.gender);

	return (0);

}
