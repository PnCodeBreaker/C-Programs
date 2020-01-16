#include <stdio.h>
int main()
{
    // Transpose of a matrix 
    int m,n,arr[5][5],i,j;
    printf("Enter the size of matrix ");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix elements : ");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Transpose of the matrix : \n");
    
    for ( i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
        
    }
    return 0;
    
}