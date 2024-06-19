#include <stdio.h>
/**
* main - Entry point of the program
* Description all single digit number with comma and space starting from 0,
* followed by $ and a new line
* Return: 0 succes
* betty style doc for function main goes there
*/
int main(void)

{
char c;

for (c = '0' ; c <= '9'; c++)
{
	putchar(c);
	{
	putchar(',');
	putchar(' ');
	}
}

putchar('$\n');

return (0);
}
