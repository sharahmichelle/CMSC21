// #2
#include <stdio.h>
int main (void)
{

	int num, rev, a, b;
	rev = 0;

	printf ("Please enter a 3-digit number: ");
	scanf ("%d", &num);

	a = num % 10;
	num /= 10;
	b = num % 10;
	num /= 10;
	rev = ((a * 100) + (b * 10) + num);

	printf ("Reverse: %d", rev);

	return 0;

}
