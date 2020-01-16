#include <stdio.h>
int main()
{
    int sum=0,i,j,m,arr[5][5];
    printf("Enter the size of the matrix : ");
    scanf("%d",&m);
    printf("Enter the values of array elements : ");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
  
     for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if(i==j)
            sum=sum+arr[i][j];
        }
        
    }
    printf("The sum of array elements is %d",sum);
    return 0;
}