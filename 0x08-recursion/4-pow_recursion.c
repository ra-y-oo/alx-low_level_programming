#include "main.h"
/**
 * _pow_recursion - teturns value of x raised to power y
 * @x:int
 * @y:int
 * Return:int
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return -1;
    }
    else if (y != 0)
    {
        return (x * _pow_recursion(x, y - 1));
    }
    else
    {
        return 1;
    }
}
