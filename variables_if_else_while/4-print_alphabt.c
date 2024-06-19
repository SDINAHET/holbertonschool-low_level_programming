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
	if (letter != 'q' && letter != 'e')
	{
	putchar(letter);
	}
}
	putchar('\n');
	return (0);
}
