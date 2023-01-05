#include "main.h"
/**
 *_print_rev_recursion - print a string in reverse
 * @s:string
 * Return:void
 */
void _print_rev_recursion(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _print_rev_recursion(s - 1);
    }
    else
    {
        _putchar('\n');
    }
}
