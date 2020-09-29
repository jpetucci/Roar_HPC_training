/* factorial.c
 * 
 * A simple problem to show the gdb debugger
 *
 * Adam Lavely - adam.lavely@psu.edu
 * Spring 2018
 *
*/

#include <stdio.h>
#include "readInVar.h"
#include "facCalc.h"

int main()
{
	// Set up the input value and output
	int input, output;

	// Read in the input to calculate the factorial of
	input = readInVar( );
	
	// Calculate the factorial
	output = facCalc( input );
	
	// Write everything out
	printf("%d! = %d\n", input, output );
}
