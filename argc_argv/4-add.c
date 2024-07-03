#include <stdio.h>

/**
 * is_digit - Check if a string consists only of digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed
 *
 * Return: Always 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
    int i, sum = 0;

    // If no arguments are passed, print 0 and return
    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    // Loop through each argument starting from argv[1]
    for (i = 1; i < argc; i++)
    {
        // Check if the argument consists only of digits
        if (!is_digit(argv[i]))
        {
            printf("Error\n");
            return 1;  // Return 1 to indicate error
        }

        // Convert the argument from string to integer and add to sum
        sum += atoi(argv[i]);
    }

    // Print the result of the addition
    printf("%d\n", sum);

    return 0;  // Return 0 to indicate success
}
