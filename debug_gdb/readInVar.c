/* readInVar.c
 * 
 * A simple problem to show the gdb debugger
 * 
 * Adam Lavely - adam.lavely@psu.edu
 * Spring 2018
 *
*/

#include <stdio.h>
#include "readInVar.h"

int readInVar(void)
{
	// Set up the variable to read in
	int input;

	// Read in the input to calculate the factorial of
	printf ("Calculate the factorial of: ");
	scanf ("%d", &input );

	// Return the variable to the main function
	return input;
}
