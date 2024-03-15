#include <stdio.h>
#include <unistd.h>

/**
 * Author: Michael A. Borchardt
 * Date: March 12th, 2024
 * Title: writeToFile.c
 * Description: How to write to a file in C programming language.
**/

void writeToFile() 
{
	// Create le file object.
	FILE *userInfo;
	// Create USER ID var.
	uid_t	uid;
	// Open ze file.
	userInfo = fopen("userInfoLog.txt", "w");
	// Get user ID.
	uid = getuid();
	// Print user information to the file.
	fprintf(userInfo, "[ --- Logging User Information --- ]\n");
	fprintf(userInfo, "\tUser Information [ID]: %d \n", (int)uid);
	// Close the file.
	fclose(userInfo);
}

int main (void) {
	// Call the function.
	writeToFile();

}
