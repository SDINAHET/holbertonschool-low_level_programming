#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef structure printall
{
	char *letter;
	void(*func)(va_list_arg)
} printall_t;

#endif /* VARIADIC_FUNCTIONS_H */
