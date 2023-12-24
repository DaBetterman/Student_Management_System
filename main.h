#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX [1024]

/**
* struct Student - A template to take a student.
*/

typedef struct Student
{
	char *name;

	char *surname;

	int age;

	char *address;

	char *gender;

} student;


#endif /* MAIN_H */
