// #2
#include <stdio.h>
int main (void) {
    int i;
    i = 1;
    //a
    while (i < 10) {
        printf("%d ", i);
        i ++;
    }
    //b
    for (i ; i < 10; i++)  {
        printf("%d ", i);
    }
    //c
    do {
        printf("%d ", i);
        i ++;
    } while (i < 10);
    return 0;
}
    // Answer: Statement C is not equivalent to the other two since it still returns number 10 while the first two statements return numbers 1 to 9 only
