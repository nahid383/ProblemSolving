#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int is_even=0;
        int is_odd=0;
        int flag = 0;
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            if(a[i]%2==0){
                is_even++;
            }
            else{
                is_odd++;
            }
        }
        for(int i=0; i<n-1; i++){
            for(int j= i+1; j<n; j++){
                if(a[i]>a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(a[i+1]-a[i]==1){
                flag=1;
                break;
            }
        }
        if(is_even==n || is_odd==n){
            printf("YES\n");
            
        }
        else if((is_even%2==0 && is_odd) || (flag)){
            printf("Yes\n");
        }
        else{
            printf("NO\n");
        }
    }
}