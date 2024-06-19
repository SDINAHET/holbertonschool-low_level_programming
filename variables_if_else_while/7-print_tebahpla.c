#include <stdio.h>
/**
* main - Entry point of the program
* Description all letter of alphabet de z vers a,
* followed by a new line
* Return: 0 succes
* betty style doc for function main goes there
*/
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}

putchar('\n');

return (0);
}

