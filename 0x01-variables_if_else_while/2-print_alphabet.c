#include <stdio.h>
/**
* main - prints the alphabets in lower case.
* main: main function
* Return: Always 0.
* description -  print alphabet in lower case
*/
int main(void) /* main void return executable codes */
{
char character;
for (character = 'a'; character <= 'z'; character++) /* for will print range*/
putchar(character); /* print statement*/
putchar('\n');
return (0);
}
