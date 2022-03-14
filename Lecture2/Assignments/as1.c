// #1
#include <stdio.h>
int main (void)
{

	int num, rev, a;
	rev = 0;

	printf ("Please enter a 2-digit number: ");
	scanf ("%d", &num);

	a = num % 10;
	num /= 10;
	rev = (a * 10) + num;

	printf ("Reverse: %d", rev);

	return 0;

}
