#include "main.h"
    /**
     * factorial - returns the factorial of a given number
     * @s:string
     * Return:int
     */
int factorial(int n)
{
   if(n < 0){
    return -1;
   }

    return n * factorial(n - 1);
}
