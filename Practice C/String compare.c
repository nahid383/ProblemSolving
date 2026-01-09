//String Compare

#include<stdio.h>

int main()
{
    char string1[]="Nahid Hasan";
    char string2[]="Nahid  Hasan";

  int d=  strcmp(string1,string2);

  if(d==0)
  {
      printf("Strings are equal.");
  }
  else

    printf("Strings are not equal.");

}
