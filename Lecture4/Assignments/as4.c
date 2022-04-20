// #4
#include <stdio.h>
int main ()
{
	int exp = 0, prod = 0, n = 1, i = 0;
	printf ("Please enter the value of exponent: ");
	scanf ("%d", &exp);
	printf("\nTABLE OF POWERS OF TWO");
	printf("\n n    2 to the n");
	printf("\n=======================================");

    for (i; i <= exp; i ++) {
        prod = n;
        printf ("\n %d    %d", i, prod);
        n *= 2;
    }
    printf("\n=======================================");
    return 0;
}
