#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
* Description : this will print the value in the paranthesis
* main : main function to be executed
* Return: returns 0
*/
int main(void) /*  main void return value function */
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is zero\n", n);
}
return (0);
}
