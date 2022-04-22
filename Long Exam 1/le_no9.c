#include <stdio.h>
int main(){
    //declaration of variables
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';
    // while loop if the user continues to print another square
    while(cont == 'y'){
        printf("Enter square size:"); // ask the user for input of square size
        scanf("%d", &size);
        for( row = 1 ;row <= size ; row ++){ // for loop for the rows
            for(column = 1 ; column <= size ;column++){ // for loop for the columns
                if ( row == 1|| row == size || column == 1|| column == size ){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf ("\n");
        }
        // ask the user to print another square
        printf("Print another square? Enter y or n: ");
        scanf ("%s", &cont);
        if (cont == 'n'){ // if the user does not want to continue
        printf("END");
        }else if (cont == 'x'){ // if the user did not choose between 'y' or 'n'
            printf("Not a valid choice. \n");
            printf("Print another square? Enter y/n: ");
            scanf ("%s", &cont);
        }
    }
    return 0;
}

