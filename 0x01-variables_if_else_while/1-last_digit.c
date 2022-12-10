#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - main block
* return - 0 always to terminate
* description : will print the last digit of numbers
* main: main function
* Return: 0 always
*/
int main(void) /*  main void return value function*/
{
int n, lastn;
lastn = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d ", n, lastn);
if (lastn > 5)
{
printf("and is greater than 5\n");
}
else if (lastn == 0)
{
printf("and is 0")
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0); /* return will terminate the code*/
}
