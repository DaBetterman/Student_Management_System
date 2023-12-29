#include "main.h"

student create_person()
{
    student person1; /*name, age, address, gender*/
	ssize_t  count;
	int number;
	person1.name = NULL;
	printf("What is your Name\n");
	number = getline(&person1.name, &count, stdin);

	if (number > 50)
	{
		fprintf(stderr, "Why is your name so long?, Didn't your mother love you?\n");
		return (person1);
	}
	if (number == 0)
	{
		fprintf(stderr, "Stop playing...");
		return (person1);
	}
	person1.surname = NULL;
	printf("What is your Surname\n");
	number = getline(&person1.surname, &count, stdin);

	if (number > 10)
	{
		fprintf(stderr, "Your ancestors must be proud...\n");
		return (person1);
	}

	if (number == 0)
	{
		fprintf(stderr, "Stop playing...");
		return (person1);
	}

	printf("What is your Age\n");
	scanf("%d", &person1.age);

	if (person1.age >= 100)
	{
		fprintf(stderr, "How is this possible\n");
		return (person1);
	}

	if (person1.age < 6)
	{
		fprintf(stderr, "Not ready to apply yet\n");
		return (person1);
	}
	person1.address = NULL;
	printf("What is your Address\n");
	getchar();
	number = getline(&person1.address, &count, stdin);

	if (number > 50)
	{
		fprintf(stderr, "No punt here...\n");
		return (person1);
	}

	if (number <= 1)
	{
		fprintf(stderr, "Give me your address or else...\n");
		return (person1);
	}
	person1.gender = NULL;
	printf("What is your Sex\n");
	number = getline(&person1.gender, &count, stdin);

	if (number > 15)
	{
		fprintf(stderr, "Sex is too long, and it's not complementory\n");
		return (person1);
	}

	if (number <= 1)
	{
		fprintf(stderr, "Short sex is not cool\n");
		return (person1);
	}

	return (person1);
}