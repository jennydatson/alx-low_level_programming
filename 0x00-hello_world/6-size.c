#include <stdio.h>
/**
 * main - A program thatprints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
