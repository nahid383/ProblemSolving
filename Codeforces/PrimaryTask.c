#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[10];
        scanf("%s",a);
        int n = atoi(a);
        int l = strlen(a);
        int div = n/(pow(10,l-2));
        
        int sum = 0;
        for(int i=2; i<l; i++)
        {
            sum = sum * 10;
            sum = sum + (a[i]-'0');
        }
        if(l>3){
       if(a[0]=='1'&&a[1]=='0'&&a[2]>='1')
       printf("YES\n");
       else
       printf("NO\n");}
       else if(l==3)
       {
        if(a[0]=='1'&&a[1]=='0'&&a[2]>='2')
        printf("Yes\n");
        else
        printf("No\n");
       }
       else
       printf("NO\n");

    }
}