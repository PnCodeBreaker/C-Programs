#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the array element #%d ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The positive elements in the array are : ");
    for ( i = 0; i < n; i++)
    {
        if(arr[i]>=0)
        {
         printf("%d \t",arr[i]);
        }
    }
        printf("The negative number are : ");
    
    for ( i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            printf("%d \t",arr[i]);
        }
        
    }
    
    return 0;
}