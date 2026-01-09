#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int hizrail;
    scanf("%d",&hizrail);
    while(hizrail--){
        char m[1000005];
        scanf("%s",m);
 
        // for(int i=0; ; i++){
        //     if(m==1000){
        //         printf("1\n");
        //     }
        //     else if(pow(10,i)==m){
        //         int d = m - pow(10,(i));
        //         printf("%d\n",d);
        //         break;
        //     }
        //     else    if(pow(10,i)>m){
        //         int d = m - pow(10,(i-1));
        //         printf("%d\n",d);
        //         break;
        //     } 
           
        // }
        int length = strlen(m);
        // int num = atoi(m);

        // int result = num - (int)pow(10, length - 1);

        // printf("%d\n", result);
        long long num = atoll(m);

        long long p = 1;
        for (int i = 1; i < length; i++) {
            p *= 10;
        }
    
        long long result = num - p;
    
        printf("%lld\n", result);
 
    }
}