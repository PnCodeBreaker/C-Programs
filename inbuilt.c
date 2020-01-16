// basic string manipulation
// Print a string in reverse order,its lenght, uppercase,lowercase,and copy into another string
// basic string manipulation
// Print a string in reverse order,its lenght, uppercase,lowercase,and copy into another string
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char* s1,s2;
  printf("Enter a String : ");
  scanf("%s",s1);
  printf("Reverse of the string is : %s \n",strrev(s1));
  printf("The lenght of string : %d \n",strlen(s1));
  printf("Upercase string is : %s \n",strupr(s1));
  printf("Lowercase : %s\n",strlwr(s1));
  strcpy(s2,s1);
  printf("The copied string is %s : \n",s2);
}