#include <stdio.h>
// a program to find gcd/hcf,lcm
int GCD(int a,int b)
{
    if(a==0)
    return b;
    else
    return GCD(b%a,a);
}
int LCM(int a,int b)
{
    return (a*b)/GCD(a,b);
}
int main()
{
    int x,y;
    printf("Enter two numbers to check its LCM and HCF : \n");
    scanf("%d%d",&x,&y);
    printf("THE HCF OF THE GIVEN NUMBERS ARE : %d \n",GCD(x,y));
    printf("THE LCM IS : %d",LCM(x,y));
    return 0;
}