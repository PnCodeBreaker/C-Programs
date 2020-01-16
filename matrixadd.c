#include <stdio.h>
int main()
{
    int i,j,m,n,arr1[5][5],arr2[5][5],arr3[5][5];
    printf("Enter the size of 2d array : ");
    scanf("%d%d",&m,&n);
    printf("Enter the value of first matrix element \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("enter the value of the second matrix : ");

        for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
        
    }
    printf("The sum of array elements are : ");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
        
    }

   return 0; 
    
    
    
}