#include <stdio.h>
int main(){
    //declaration of variables
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';
    // while loop if the user continues to print another square
    while(cont == 'y'){
        printf("Enter square size: "); // ask the user for input of square size
        scanf("%d", &size); // scanning the input
        for( row = 0 ;row < size ; row ++){ // for loop for the rows
            for(column = 0 ; column < size ;column++){ // for loop for the columns
                if ( row == 0|| row == size-1 || column == 0|| column == size-1 ){
                    printf("*"); // printing the asterisks
                }else{
                    printf(" "); // if conditions above is not applicable
                }
            }
            printf ("\n"); // adding new line for the next loop
        }
        // ask the user to print another square
        printf("Print another square? Enter y or n: ");
        scanf ("%s", &cont);
        if (cont == 'n'){ // if the user does not want to continue
        printf("END");
        }else if (cont == 'x'){ // if the user did not choose between 'y' or 'n'
            printf("Not a valid choice. \n");
            printf("Print another square? Enter y/n: "); // will be displayed after the invalid choice
            scanf ("%s", &cont);
        }
    }
    return 0;
}

