#include <stdio.h>

/*****************************************************************
 * Author: Michael Anthony Borchardt
 * Date: March 13th, 2024
 * Title: printhelloworld.c
 * Description: A confounded method of printing characters in C.
******************************************************************/

// Call the main routine.
int main (void)
{	
	// Create integer variable.
	int var = 0;
	// Pointer to store hello world string.
	char *storage = "Hello World!\n";
	// While the end of string is not reached. All strings in C
	// are appended with a NUL character, defined by the escape character
        // '\0'
	while (storage[var] != '\0')
	{	
		// Print the value of storage while we are iterating 
		// through.
		printf("%c", storage[var++]);
	}
	// Return zero.
	return 0;
	

}
