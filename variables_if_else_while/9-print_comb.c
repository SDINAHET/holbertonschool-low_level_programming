#include <stdio.h>
/**
* main - Entry point of the program
* Description all single digit numbers en letter of base 16 starting from 0,
* followed by a new line
* Return: 0 succes
* betty style doc for function main goes there
*/
int main(void)

{
char c;

for (c = '0' ; c <= '9'; c++)
{
	putchar(c);
}

for (c = 'a' ; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');

return (0);
}
