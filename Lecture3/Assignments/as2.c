// #2
#include <stdio.h>
int main (void) {
	int first, second;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d",&first,&second);
	printf("\nNumber entered in words: ");

    // numbers 10 to 19
	if (first == 1){
        switch(second) {
            case 0: printf("ten"); break;
            case 1: printf("eleven"); break;
            case 2: printf("twelve"); break;
            case 3: printf("thirteen"); break;
            case 4: printf("fourteen"); break;
            case 5: printf("fifteen"); break;
            case 6: printf("sixteen"); break;
            case 7: printf("seventeen"); break;
            case 8: printf("eighteen"); break;
            case 9: printf("ninteen"); break;
        }
        return 0;
	}
	// numbers 20 to 99
	switch(first) {   //first digit
        case 2: printf("twenty"); break;
        case 3: printf("thirty"); break;
        case 4: printf("forty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninety"); break;
	}
    switch(second) {  //second digit
        case 1: printf("-one"); break;
        case 2: printf("-two"); break;
        case 3: printf("-three"); break;
        case 4: printf("-four"); break;
        case 5: printf("-five"); break;
        case 6: printf("-six"); break;
        case 7: printf("-seven"); break;
        case 8: printf("-eight"); break;
        case 9: printf("-nine"); break;
    }
    return 0;
}

