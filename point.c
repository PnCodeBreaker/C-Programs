#include <stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    printf("The pointer value of a is : %d \n",*&a);
    printf("The pointer value of a is : %d \n",*(&a));
    printf("The pointer value of ptr var is : %d \n",*ptr);
    return 0;
}