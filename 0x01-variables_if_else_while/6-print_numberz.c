#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * Starting frim 0, followed by the new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int c = 0;

while (c < 10)
{
putchar(48 + c);
c++;
}

putchar('\n');
return (0);
}
