/* Calculates the number of elements in an array of character pointers
* Iterates through the array, until NULL is read
*
* Parameter: char *[] [array - array to read from]
* Return: Number of elements in the array
*
* By Rohan Molloy
* Nov 25 2014
*/
#include "LinkedList.h"
int arrsize(char *array[])
{
	int i = 0;
	while(array[i++] != NULL)
	{
	}
	return i;
}
