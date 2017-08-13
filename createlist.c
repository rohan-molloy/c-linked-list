/* Create linked list from character array.
 * Work "Backwords". Start with a null head.
 * For each array element, create a new node, set its val to the element, and next to head
 * Then update head to point to the newly created node
 * When iteration is finished, return a pointer to the node at the ending position
 *
 * Parameter: char** [array - Pointer to the string array to be processed into a linked list]
 * Return: A pointer to the head node of the created linked list
 *
 * By Rohan Molloy Nov 25 2014
 */
#include "LinkedList.h"
linked_node* createlist(char *array[])
{
	// Pointer to nodes @ head and current position
	linked_node *head;
	linked_node *currentnode;

	// Head is initially null
	head = NULL;

	// Iterate through the array, processing each element into a node
	// We iterate backwards, so that the head of the final list is the first element in the array
	int i;
	for(i = arrsize(array)-1; i>0; i--)
	{
		// Create the pointer to the new (current node).
		// Allocate an amount of memory equal to the size of node, creating a void* pointer
		// Cast this void pointer to a linked node pointer
		currentnode = (linked_node*)malloc(sizeof(linked_node));

		if(currentnode == NULL)
		{
			exit(errormsg(MEMORY_ALLOCATION_ERROR));
		}
		// Derefrence the pointer to the struct to manipulate the value of its members
		currentnode->value = array[i]; //Set value
		currentnode->next = head; //Set successor

		// Set head as a ptr to current node
		head = currentnode;
	}
	return head;
}
