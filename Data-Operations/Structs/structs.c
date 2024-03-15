#include <stdio.h>


/** Author: Michael A. Borchardt
  * Date: March 10th, 2024
  * File: structs.c
  * Description: This file demonstrates a fun way to play with structs.
  */
void createStruct(int x, int y)
{
	// Create the struct.
	typedef struct
	{
		// Define the members of the object.
		int p,q;
	} calculateAreaOfSquare;

	// Create the object.
	calculateAreaOfSquare obj;
	// Create the point reference to the object.
	calculateAreaOfSquare *k = &obj;

	// Set member values.
	k->p = x;
	k->q = y;
	
	//Display to output.
	printf("Area of Square: %d \n", (k->p)*(k->q));
}

// If you wanted to calculate the area of a square like a normal human would...
void calcAreaOfSquare(int x, int y)
{
	// Store the value of x*y in variable z. 
	int z = x*y;
	printf("Area of square: %d \n", z);
}

// Call main 
int main() 
{
	// Call the functions in the main routine.
	createStruct(10,10);
	calcAreaOfSquare(10,10);
}
