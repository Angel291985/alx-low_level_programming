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
n = str_concat("Betty ", "Holberton");
if (n == NULL)
{
printf("failed\n");
return (1);
}
printf("%s\n", n);
free(n);
return (0);
}
