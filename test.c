#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

// Structure for a key-value pair
struct KeyValue
{
	char key[50];

	int value;

	struct KeyValue* next; // for handling collisions with linked list
};

// Hash table array
struct KeyValue* hashTable[TABLE_SIZE];

// Hash function
int hash(char* key)
{
	int hashValue = 0;

	for (int i = 0; i < strlen(key); i++)
    {

		hashValue += key[i];
	}
	return (hashValue % TABLE_SIZE);
}

// Function to insert a key-value pair into the hash table
void insert(char* key, int value)
{

	int index = hash(key);

	// Create a new key-value pair
	struct KeyValue* newPair = (struct KeyValue*)malloc(sizeof(struct KeyValue));
	strcpy(newPair->key, key);
	newPair->value = value;
	newPair->next = NULL;

	// If the index is empty, insert the new pair
	if (hashTable[index] == NULL)
    {
		hashTable[index] = newPair;
	} else {
		// Handle collision by adding to the linked list at the index
		struct KeyValue* current = hashTable[index];
		while (current->next != NULL)
        {
			current = current->next;
		}
		current->next = newPair;
	}
}

// Function to retrieve the value for a given key
int get(char* key)
{
	int index = hash(key);

	// Search for the key in the linked list at the index
	struct KeyValue* current = hashTable[index];
	while (current != NULL)
    {
		if (strcmp(current->key, key) == 0)
        {
			return (current->value);
		}
		current = current->next;
	}

	// Key not found
	return (-1);
}

int main()
{
	// Insert key-value pairs into the hash table
	insert("John", 25);
	insert("Alice", 30);
	insert("Bob", 22);

	// Retrieve values using keys
	printf("John's age: %d\n", get("John"));
	printf("Alice's age: %d\n", get("Alice"));
	printf("Bob's age: %d\n", get("Bob"));
	printf("Charlie's age: %d\n", get("Charlie")); // Not found

	return (0);
}
