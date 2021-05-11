#include <stdio.h>

void main()
{
    int arr[3][2] = {
        {0143, 000},
        {2128, 111},
        {1109, 222},
    };
    int id_Num, pin;
    {

        printf("Enter ID Number:");
        scanf("%d", &id_Num);
        printf("Enter PIN:");
        scanf("%d", &pin);

       if  (id_Num && pin &&
           id_Num == arr[0][0] && pin == arr[0][1] ||
           id_Num == arr[1][0] && pin == arr[1][1] ||
           id_Num == arr[2][0] && pin == arr[2][1]
           )
        {
            printf("\nYou have successfully logged in  \n");
        printf("ID#:%d \n", id_Num);
        return 0;
        }
        else
        {
            printf("Invalid ID/PIN!\n");
        }
    }
    return 0;
}


