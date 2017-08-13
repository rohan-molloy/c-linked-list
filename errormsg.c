/* Error message for memory allocation failure. Prints error to stderror and returns failure
 *
 * Parameters: char [code - Character specifying type of error]
 * Return: Exit faiure
 *
 * By Rohan Molloy Nov 25 2014
 */
#include "LinkedList.h"
int errormsg(char code)
{
	switch(code)
	{
		case MEMORY_ALLOCATION_ERROR:
		perror("Cannot allocate memory; malloc failed\n");
		return EXIT_FAILURE;

		case NULL_LIST_ERROR:
		perror("List Creation Failed; createlist() returned null pointer\n");
		return EXIT_FAILURE;

		case ARGUMENT_ERROR:
		perror("Invalid arguments\n");
		return EXIT_FAILURE;

		default:
		perror("Miscellaneous error\n");
		return EXIT_FAILURE;

	}

}
