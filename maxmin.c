#include <stdio.h>
int main()
{
    int n,max,min,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter Element #%d ",i+1);
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for ( i = 0; i < n; i++)
    {
     if (arr[i]>max)
     {
         max=arr[i];
     }
     if(arr[i]<min)
     {
         min=arr[i];
     } 
    }
    printf("The maximum number is : %d \n",max);
    printf("The minimum number is : %d",min);
    return 0;
    
}