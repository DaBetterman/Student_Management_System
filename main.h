#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define TABLE_SIZE 50


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

typedef struct Node
{
	char key[50];
	student data;
	struct Node *next;
} node;

extern node *hashTable[TABLE_SIZE];

student create_person();
FILE *save_in_file();
int hash(char *);
void free_person(student);
node *insert_student(student);
void get_student(char *, student);

#endif /* MAIN_H */
