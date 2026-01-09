#include<stdio.h>
int main()
{
    int flag =0;
char string1[2];

scanf("%s",string1);
for(int i=1; i<=5; i++){
    char string2[2];
    scanf("%s",string2);
    if(string1[0]==string2[0])
    flag=1;
    else if(string1[1]==string2[1])
    flag=1;
}
if(flag==1)
printf("Yes");

else
printf("No");
}