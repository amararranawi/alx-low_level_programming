#include <stdio.h>
/**
*main -main block will execute for
* main: main function
* return: terminate main function
* description: print alphabet in lower case
*/
int main(void) /* main void return executable codes*/
{
char alp = 'a';
 clrscr();
for (alp <= 'z') /* for will print range*/
{
putchar(alp); /* print statement*/
putchar("\n");
alp++;
}
return (0);
}
