#include <stdio.h>

int main() {
    
    char s[100001];
    scanf("%s", s);
    
    int n = 0;
    while (s[n] != '\0') 
    n++;  
    
    int prefix[n+1];  
    prefix[0] = 0; 
    
   
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + (s[i-1] == s[i]);
    }
    
   
    int m;
    scanf("%d", &m);
    
   
    while (m--) {
        int l, r;
        scanf("%d %d", &l, &r);
        
       
        l--; r--;
        
       
        int result = prefix[r] - prefix[l];
        printf("%d\n", result);
    }

    return 0;
}
