#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * union my_union - union to test values
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
 typedef union my_union_u
        {
                uint8_t u8;
                uint16_t u16;
                uint32_t u32;
                uint64_t u64;
        } my_union;

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
