#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/*1*/
unsigned int binary_to_uint(const char *b);

/*2*/
void print_binary(unsigned long int n);

/*3*/
int get_bit(unsigned long int n, unsigned int index);

/*4*/
int set_bit(unsigned long int *n, unsigned int index);

/*5*/
int clear_bit(unsigned long int *n, unsigned int index);

/*6*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);


#endif /* MAIN_H */
