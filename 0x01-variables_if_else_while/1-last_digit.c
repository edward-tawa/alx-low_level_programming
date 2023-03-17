#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    srand(time(0));
    int n = rand();
    int mod = n%10;
    printf("%d\n",n);
    printf("%d\n",mod);
}
