#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

       if(n%2==1)
       printf("Yes\n");

       else
       printf("NO\n");
    }
   
}