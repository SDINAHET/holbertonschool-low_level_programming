#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates a random valid password for 101-crackme.
*
* Return: Always 0.
*/
int main(void)
{
	int i;
	char password[7]; // Adjust size based on analysis

	srand(time(NULL));
	for (i = 0; i < 6; i++) // Adjust loop based on analysis
	{
		password[i] = rand() % 26 + 'a'; // Generates random lowercase letters
	}
	password[6] = '\0'; // Null-terminate the string

	printf("%s", password);
	return (0);
}
