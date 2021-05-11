#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = 0, *arr, i, sum = 0;

    printf("size of array: ");


    scanf("%d",&size);
    if(size < 5 || size > 9)
    {
        printf("Array size limit is 5 to 10 only.");
        return 0;
    }

     arr = (int *) malloc(sizeof(int) * size);


     for(i = 0; i < size; i++)
     {
          printf("element %d: ",i+1);
          scanf("%d", &arr[i]);


          sum += arr[i]; //add all the inputted elements
     }

     printf("Sum of all array elements: %d", sum);

     return 0;
}
