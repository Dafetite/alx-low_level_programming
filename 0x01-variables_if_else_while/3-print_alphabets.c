#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int dafe;
for (dafe = 0; dafe < 100; dafe++)
putchar(alpha[dafe]);
putchar('\n');
return (0);
}
