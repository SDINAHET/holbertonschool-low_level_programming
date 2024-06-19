#include <stdio.h>
/**
* main - Entry point of the program
* Description print alphabet in lowercase
* Return:0 succes
* betty style doc for function main goes there
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
for (letter = 'A'; letter <= 'Z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
