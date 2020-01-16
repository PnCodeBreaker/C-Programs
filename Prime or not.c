#include <stdio.h>
#include <stdlib.h>
main()
{
  //given number is prime or not
  int N,i;
  printf("Enter a number to check it is prime or not : ");
  scanf("%d",&N);
  for(i=2;i<=N/2;i++)
  {
      if(N%i==0)
      {
          printf("It is not a prime number");
          getchar();
          exit(0);
      }
  }
  printf("Given number is prime");
  getchar();
}
