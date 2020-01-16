#include <stdio.h>
#include <stdlib.h>
int main()
{
    // find the average of the entered number using for loops
    int n,newn,newsum=0;
    float avg;
    printf("Enter how many numbers to be entered : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&newn);
        newsum=newsum+newn;

    }
    avg=newsum/(float)n;
    printf("The average of the numbers is : %f",avg);
    return 0;
}
