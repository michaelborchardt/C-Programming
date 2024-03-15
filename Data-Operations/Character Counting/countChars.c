#include <stdio.h>

int len (char string[])
{
	int ind;
	for (ind = 0; string[ind] != '\0'; ind++)
		continue; 
	return (ind-1);
}

int main()
{
	char l[100];
	while (1) {
		printf("Enter line:");
		fgets(l, sizeof(l), stdin);
		printf("Length is: %d\n", len(l));
	}
}
