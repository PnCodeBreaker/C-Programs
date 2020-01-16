#include <stdio.h>
int fact(int n)
{
    int f;
    if(n==1)
    {
        return 1;
    }
    else
    {
        f=n*fact(n-1);
    }
    return f;
}
int main()
{
    int s;
    printf("Enter a no. to calculate its factorial : ");
    scanf("%d",&s);
    printf("The factorial is : %d ",fact(s));
    return 0;
}