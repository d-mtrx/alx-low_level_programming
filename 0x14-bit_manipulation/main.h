#ifndef MAIN_H
#define MAIN_H

/* INCLUDED LIBRARIES */
#include <stdio.h>

/* FUNCTION PROTOTYPES */
/* declaration of putchar function to print characters */
int _putchar(char c);

/* declaration of function to determine string length */
int string_length(const char *s);

/* declaration of function to convert binary to unsigned int (0)*/
unsigned int binary_to_uint(const char *b);

/* declaration of function to determine bit multiplier, 2^(bit count) */
int power(int count);

/* declaration of function to print the binary of unsigned int (1)*/
void print_binary(unsigned long int n);

/* declaration of function to determine power of 2, 2^(count) */
unsigned long int power2(int count);

/* declaration of function to return value of bit at index (2)*/
int get_bit(unsigned long int n, unsigned int index);

/* declaration of function to set the value of bit to 1 at index (3)*/
int set_bit(unsigned long int *n, unsigned int index);

/* declaration of function to set the value of bit to 0 at index (4)*/
int clear_bit(unsigned long int *n, unsigned int index);

/* declaration of function to find count of bits flipped to change number (5)*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* declaration of function to find endianess of system (6)*/
int get_endianness(void);

#endif
