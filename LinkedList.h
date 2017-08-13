/// Header for LinkedList structure.
/// Written By Rohan Molloy.

#include <stdio.h>
#include <stdlib.h>

/* The link list structure */
struct linkednode {
	char* value;
	struct linkednode* next;
};
typedef struct linkednode linked_node;

/* Function to create linked node from string array */
linked_node* createlist(char*[]);

/* Error codes */
#define MEMORY_ALLOCATION_ERROR 'm'
#define NULL_LIST_ERROR 'n'
#define ARGUMENT_ERROR 'a'

/* Function to print eror messages based on codes, and then to return failure */
int errormsg(char );

/* Function to calculate the number of elements in a string array */
int arrsize(char *[] );

/* Function to print the linked list */
void printlist(linked_node* );
