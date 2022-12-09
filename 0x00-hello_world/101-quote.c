#include <stdio.h>
#include <unistd.h>
/**
* main - main block
* description : this code will print the value in write command
* Main : main function executable code goes in here
* Return: 0 always zero
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
