#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: the destination string to append to
 * @src: the source string to copy from
 * @n: the maximum number of bytes to copy
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0, i;

    while (dest[dest_len] != '\0')
        dest_len++;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    dest[dest_len + i] = '\0';

    return dest;
}

