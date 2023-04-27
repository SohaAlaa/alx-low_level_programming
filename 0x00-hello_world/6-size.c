#include <stdio.h>
/**
 * main -Print the size of various types in c.
 * code by bwave ict
 * Return: 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %1u byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %1u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %1u byte(s)\n", (unsigned long)sizeo(d));
printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
