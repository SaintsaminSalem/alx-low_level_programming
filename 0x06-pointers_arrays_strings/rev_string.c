#include "main.h"
#include <stddef.h>

/**
 * rev_string - Reverse a string in-place
 * @str: The string to be reversed
 *
 * Return: Pointer to the reversed string
 */
char *rev_string(char *str)
{
    if (str == NULL)
        return NULL;

    int len = 0;
    char temp;

    // Calculate the length of the string
    while (str[len] != '\0')
        len++;

    // Reverse the string by swapping characters from the beginning and end
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    return str;
}
