#include <stdio.h>
void main()
{
    // Output 3
  int vote_age= 17;
  printf("Name: Juan Delama De Guzman \n");

  printf("Input the age of the candidate : ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     {
       printf("Invalid Age, Please Try Again.");
     }
  else
     printf("Congratulation! You are eligible for casting your vote.\n");
}

