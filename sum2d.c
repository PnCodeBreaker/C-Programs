#include <stdio.h>
int main()
{
    int sum=0,i,j,n,m;
    printf("Enter the size of the matrix : ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter the values of array elements : ");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
  
     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            sum=sum+arr[i][j];
        }
        
    }
    printf("The sum of array elements is %d",sum);
    return 0;
}