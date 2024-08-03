#include <stdio.h>

/**
 * pre_main - Function that prints a message before the main function.
 *
 * Description: This function is executed automatically before the
 *              main function due to the constructor attribute.
 *
 * Return: Nothing. This function does not return a value.
 */
void pre_main(void) __attribute__((constructor));

void pre_main(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
