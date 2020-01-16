#include <stdio.h>
int main()
{
    int i,j,k,n,e;
    printf("Enter the number of lines to be printed \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    scanf("%d",&e);
    return 0;
}