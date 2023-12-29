#include "main.h"

/**
* free_person - Function that free's the memory
* @person1: Struct content to be freed
*/

void free_person(student person1)
{
	free(person1.name);
	free(person1.surname);
	free(person1.address);
	free(person1.gender);
}
