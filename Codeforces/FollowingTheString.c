#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--)  {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        int count[200005] = {0};
        for(int i=0; i<n; i++){
            char ch = 'a' + count[a[i]];
            printf("%c",ch);
            count[a[i]]++;
        }
        printf("\n");
    }
}