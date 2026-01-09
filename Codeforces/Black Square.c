#include<stdio.h>
int main()
{
    int a[4];
    char s[100005];
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    scanf("%s",&s);
int wastedcalories=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i] == '1')
            wastedcalories = wastedcalories + a[0];
      else if(s[i]=='2')
            wastedcalories = wastedcalories + a[1];
             else if(s[i]=='3')
            wastedcalories = wastedcalories + a[2];
             else if(s[i]=='4')
            wastedcalories = wastedcalories + a[3];
    }
    printf("%d",wastedcalories);

}
