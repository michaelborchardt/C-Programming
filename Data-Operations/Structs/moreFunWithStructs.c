#include <stdio.h>

/** 
 * Author: Michael A. Borchardt
 * Date: 3-12-24
 * Title: moreFunWithStructs.c
 * Description: Proper struct usage in C programming language.
 */

// Create new struct type to store date data.
typedef struct {
	short signed int month;
	short signed int day;
	short signed int year;	

} date;

// Create new date object. 
date today;

// Set new date object in function. Not required, just fun.
void whatIsToday()
{
	// Date values.
	today.month = 8;
	today.day = 4;
	today.year = 1994;
}

// Call  main routine.
int main(void) {
	// Call function to set the date.
	whatIsToday();
	// Create date object and point object at today.
	date *currentDate = &today;
	// Print.
	printf("\nMonth: %d \t Day: %d \t Year: %d\n", currentDate->month, currentDate->day, currentDate->year);

}
