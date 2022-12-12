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
char CHARACTER;
for (character = 'a'; character <= 'z'; character++) /* f\or will print range*/
putchar(character); /* print statement*/
for (CHARACTER = 'A'; CHARACTER <= 'Z'; CHARACTER++) /* f\or will print range*/
putchar(CHARACTER); /* print statement*/
putchar('\n');
return (0);
}
