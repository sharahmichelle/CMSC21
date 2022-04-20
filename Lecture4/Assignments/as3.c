// #3
#include <stdio.h>
int main(void)
{
    int i;
    for (i = 1; i <= 128;) {
        printf("%d ", i);
        i *= 2;
    }
    return 0;
}
    //Output: 1 2 4 8 16 32 64 128
