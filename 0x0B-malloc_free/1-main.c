#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - .
 * Return: Always 0.
 */
int main(void)
{
char *n;
n = _strdup("Holberton");
if (n == NULL)
{
printf("failed to allocate memory\n");
return (1);
}
printf("%s\n", n);
free(n);
return (0);
}
