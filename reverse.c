#include <stdio.h>
int main()
{
    // reverse an array
    int n;
    int i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element #%d. ",i+1);
        scanf("%d",&arr[i]);
    }
    // reversing the array;
    for(i=n-1;i>=0;i--)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
}
