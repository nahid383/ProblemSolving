#include<iostream>
#include<algorithm>
#include<vector>
#define w while
#define i cin
#define o cout
#define ll long long
using namespace std;
int main(){
    int t;
    i>>t;
    w(t--){
        int n,d;
        i>>n>>d;
        int a[n];
        //int flag = 1;
        int count = 0;
        bool allSmall = true;
        for(int k=0; k<n; k++){
            i>>a[k];
            if(a[k]>d){
                // flag=0;
                allSmall = false;
                count++;
            }

        }
        // for(int i=0; i<n; i++){
        //     if(a[i]>d){
        //         for(int i=0)
        //     }
        // }
        sort(a, a+n);
        // for(int j=0; j<n; j++){
        //     for(int k=j+1; k<n; k++){
        //         if((a[j]+a[k])<=d){
        //             count--;
        //         }
        //     }
        // }

        if(allSmall || (a[0]+a[1]<=d)){
            o<<"YES"<<endl;
        }
        else{
            o<<"NO"<<endl;
        }

    }
    
}
