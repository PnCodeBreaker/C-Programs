#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of lines \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        else{
            for(j=i;j>=1;j--)
            {
                printf("%d",j);
            }
            printf("\n");
        }
    }
}