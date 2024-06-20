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
int i;

for (i = 0 ; i <= 9; i++)
{
	putchar(i + '0');
	if (i < 9)
	{
	putchar(' '),
	putchar(',');
	}
}

putchar('\n');

return (0);
}
