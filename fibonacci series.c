#include <stdio.h>
int main()
{
    int pre=0,cur=1,temp,n,i;
    printf("Enter the number upto which fibonacci series to be calculated : ");
    scanf("%d",&n);
    printf("%d\t%d ",pre,cur);
    for(i=1;i<=n;i++)
    {
        temp=cur;
        cur=pre+cur;
        pre=temp;
        printf("\t%d",cur);
    }

      return 0;
}
