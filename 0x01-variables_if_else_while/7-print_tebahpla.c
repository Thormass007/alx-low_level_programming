#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * Starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'z';
 
while (c >= 'a')
{
putchar(c);
}

putchar('\n');
return (0);
}
