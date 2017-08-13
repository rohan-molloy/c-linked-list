
// Print the elements in the linked list.
// Start at the head, and traverse until no successor can be found
//
// Parameter: linked_node* [head - Ptr to head node of the linked list]
// Return: void
//
// By Rohan Molloy

#include "LinkedList.h"
void printlist(linked_node* list)
{
    /* Check list is not null */
    if(list == NULL)
    {
      exit(errormsg(NULL_LIST_ERROR));
    }
    /* Traverse until no next node exists */
    while(list)
    {
      printf("%s -- ",list->value);
      list = list->next;
    } 
    printf("\n");
}
