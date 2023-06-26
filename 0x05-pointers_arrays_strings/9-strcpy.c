#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte (\0),
 *            to the buffer pointed to by dest.
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string to be copied from.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
        char *copy = dest;

        while (*src != '\0')
                *dest++ = *src++;

        *dest = '\0';
        return (copy);
}

