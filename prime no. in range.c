#include <stdio.h>
#include <stdlib.h>
main()
{
  //prime number in range
  int i,flag=1,N,newN;
  printf("Enter the starting range of number to display the prime numbers : ");
  scanf("%d",&newN);
  printf("Enter the ending range : ");
  scanf("%d",&N);
  for(i=newN;i<=N;i++)
  {
      flag=1;
      for(i=2;i<=newN/2;i++)
      {
          if(newN%i==0)
          {
              flag=0;
              break;
          }
      }

  }
  if(flag==1)
  {
      printf("%d ",newN);
  }
}
