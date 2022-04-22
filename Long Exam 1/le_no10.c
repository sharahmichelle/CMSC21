#include <stdio.h>
#include <math.h>
int main(){
    // declaration of variables
    int x;
    float y = 1;
    double final_approx, tol = 0.00001;
    printf ("Enter x: ");
    scanf ("%d", &x);
    // while loop for final approximation
    while ((final_approx - y) <= tol ){
        final_approx = fabs(((y + (x/y))*0.5)); //iterative method
        printf ("%f", final_approx);
        y += 1;
        final_approx ++;
    }
    return 0;
}

