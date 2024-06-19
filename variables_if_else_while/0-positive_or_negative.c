#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main tache0 projet10 Positive anything is better than negative nothing
* Return:0 succes
* betty style doc for function main goes there
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* if the number is greater than 0: is positive n>0 */
	/* if the number is 0: is zero n==0 */
	/* if the number is less than 0: is negative n<0 */
	if (n > 0)
	{
		fprint("%d is positive\n", n);
	}
	else if (n == 0)
	{
		fprinf("%d is zero\n", n);
	}
	else
	{
		fprint("%d is negative\n", n);
	}
	return (0);
}
