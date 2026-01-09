// #include<stdio.h>
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n,k;
//         scanf("%d %d",&n,&k);
//         int a[k];
//         for(int i=0; i<k; i++){
//              scanf("%d",&a[i]);
//         }
    
//         for(int i=0; i<k-1; i++){
//             for(int j=i+1; j<k; j++){
//                 if(a[i]>a[j]){
//                     int temp = a[i];
//                     a[i] = a[j];
//                     a[j] = temp;
//                 }
//             }
//         }

//         int count = 0;
//         for(int i=0; i<=k-2; i++){
//             int num=a[i];
//             int n_count=0;
//             while(num>1){
//                 num=num-1;
//                 n_count++;
//             }
//             count = count + (2*n_count) - 1;
//         }
//         // for(int i=0; i<k; i++){
//         //     printf("%d ",a[i]);
//         // }
//         for(int i=0; i<k-1; i++){
//             count=count+a[i];
//         }

//         printf("%d\n",count);
//     }
// }

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[k];
        for(int i=0; i<k; i++){
            cin>>a[i];
        }
        sort(a,a+k);
        int count = 0;
        for(int i=0; i<k-1; i++){
            if(a[i]==1){
                count++;
            }
            else{
                count=count+a[i]-1+a[i];
            }
        }
        cout<<count<<endl;
    }
}