#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to search
 * @c: Character to search for
 *
 * Return: Pointer to first occurrence of character, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s != c)
        {
            s++;
        }
        else
        {
            return (s);
        }
    }

    if (c == '\0')
    {
        return (s);
    }

    return (NULL);
}
