#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The initial segment of the string.
* @accept: The bytes to include in the prefix substring.
*
* Return: The number of bytes in the initial segment of s which
*         consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
/*This loop continues as long as the current character pointed to by s is -*/
/*-not the null terminator ('\0').*/
	{
		for (a = accept; *a; a++)
/*This loop iterates through each character in the accept string.*/
		{
			if (*s == *a)
			{
				count++;
				break;
/*This checks if the current character in s matches the current*/
/* character in accept*/
/*If a match is found, it increments the count and breaks out of*/
/* the for loop to continue checking the next character in s.*/
			}
		}
		if (*a == '\0')
		{
			break;
/*After the for loop, this checks if *a is the null terminator ('\0').*/
/*If *a is '\0', it means that no match was found in accept for the current*/
/*character in s.*/
/*In this case, the while loop breaks because the initial segment*/
/*of s that consists only of characters from accept has ended.*/
		}
		s++;
/*Moves the pointer s to the next character in the string to check.*/
	}
	return (count);
/*After the loops have completed, the function returns the value of count,*/
/* which is the number of bytes in the initial segment*/
/* of s that consist only of bytes from accept.*/
}
