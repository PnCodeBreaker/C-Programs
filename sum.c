#include <stdio.h>
int main() {
    int n,i,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        printf("Enter Element #%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("the sum of the arrays are : %d",sum);
    
    return 0;
}
