#include <stdio.h>
void main()
{
    // Output 2
  int vote_age= 17;
  printf("Name: Juan Delama \n");

  printf("Input the age of the candidate : ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     {
       printf("Sorry, You are not eligible to caste your vote.\n");
       printf("You would be able to caste your vote after %d year.\n",18-vote_age);
     }
  else
     printf("Congratulation! You are eligible for casting your vote.\n");
}

