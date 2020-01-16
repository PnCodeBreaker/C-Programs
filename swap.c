#include <stdio.h>
// swap by pointers 
int swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d%d",&a,&b);
    printf("The two numbers before swapping a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("The two numbers after swapping a = %d and b = %d",a,b);
    return 0;
}