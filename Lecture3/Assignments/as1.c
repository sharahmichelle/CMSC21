// #1
#include <stdio.h>
#include <stdbool.h>
int main (void) {
	int age;
	bool teenager = false;

    printf("Enter age: ");
    scanf("%i", &age);

	if (age >= 13 && age <= 19) {
        teenager = true;
	}
	printf("\nA teenager? %s",teenager ? "True" : "False");
	return 0;
}

