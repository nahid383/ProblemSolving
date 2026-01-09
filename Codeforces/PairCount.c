#include <stdio.h>

int main() {
    int n, p, k;
    scanf("%d %d %d",&n,&p,&k);
    
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    long long count = 0;
    for (int i=0; i<n; i++) 
    {
        for (int j=i+1; j<n; j++)
         {
            long long result = (a[i] ^ a[j]) * ((a[i] * a[i]) ^ (a[j] * a[j]));
            if (result%p == k) {
                count++;
            }
        }
    }

    printf("%lld\n", count);

}
