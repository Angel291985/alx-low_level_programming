#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - check the code for ALX School students.
* Return: Always 0.
*/
int main(int ac, char *av[])
{
char *n;
n = argstostr(ac, av);
if (n == NULL)
{
return (1);
}
printf("%s", n);
free(n);
return (0);
}
