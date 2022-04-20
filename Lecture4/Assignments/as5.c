// #5
#include<stdio.h>

int main(){
    int start, days, i;;
    char reply;

    do
    {
        printf("Enter number of days in month: ");
        scanf("%d", &days);

        if(days >= 32 || days <= 0 || days <= 27)
        {
            printf("\nInvalid input!\n");
            printf("\nNumbers 28 to 31 are only accepted!");
            printf("\n\nWould you like to continue?\n");
            printf("Please enter Y if yes, and N if no.\n\n");
            scanf("%s", &reply);

                if(reply=='N' || reply=='n')
                {
                    break;
                }
        }
        else
        {
            printf("Enter the starting day of the week: ");
            scanf("%d", &start);
            for(i = 1 ; i < start; i++) {
                printf("   ");
            }

            for(i = 1; i <= days; i++) {
                printf("%2d ", i);
                if((i + start - 1)%7 ==0) {
                    printf("\n");
                }
            }

        printf("\n\nWould you like to continue?\n");
        printf("Please enter Y if yes, and N if no.\n\n");
        scanf("%s", &reply);

            if(reply=='N' || reply== 'n')
            {
                break;
            }
        }
    }

    while(reply=='Y' || reply=='y');

    printf("\nThank you!");

    return 0;
}

