#include <stdio.h>
int main()
{
    int i,j,m,n,arr[5][5];
    printf("Enter the size of 2d array : \n");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix elements : \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("The stored value of matrix are : \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d \t",arr[i][j]);
            
        }
        printf("\n");
    }
    return 0;
    
}