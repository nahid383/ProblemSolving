#include<stdio.h>
int main()
{
    char str1[40]="Bangladesh";
    char str2[40]="India";
    char temp[40];

    printf("Before swapping\n");
    printf("String 1 : %s\n",str1);
    printf("String 2 : %s\n",str2);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

      printf("After swapping\n");
    printf("String 1 : %s\n",str1);
    printf("String 2 : %s\n",str2);

}
