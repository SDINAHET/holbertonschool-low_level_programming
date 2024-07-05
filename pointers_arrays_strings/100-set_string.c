#include "main.h"

/**
* set_string - sets the value of a pointer to a char.
* @s: double pointer to be set
* @to: pointer to be pointed to
*/
void set_string(char **s, char *to)
{
	*s = to;
}
