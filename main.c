#include "LinkedList.h"

/**
* Create a linked list from command line arguments and print to screen
* By Rohan Molloy
*/
int main(int argc, char *argv[])
{
	/* Example array */
	char *exampleValues[] = {"One", "Two", "Three", "Four", "Five", "Six"};

	//Create the linked list from command line arguments
	//If less than 2 args are supplied, use the default array
	linked_node* linklist = (argc < 2) ? (createlist(exampleValues)) : (createlist(argv));

	printlist(linklist);
	exit(EXIT_SUCCESS);
}
