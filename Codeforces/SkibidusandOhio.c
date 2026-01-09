#include <stdio.h>
#include <string.h>
 
int main() {
    int t;
    scanf("%d", &t); 
    
    while (t--) {
        char s[101];
        scanf("%s", s);  
        
        int n = strlen(s);
   
        
       int flag=0;
        for (int i = 0; i < n-1; i++) {
          if(s[i]==s[i+1])
            flag=1;
           
           
        }
        if(flag==1)
        printf("1\n");
        else
       
        printf("%d\n",n);
    }
    
   
}