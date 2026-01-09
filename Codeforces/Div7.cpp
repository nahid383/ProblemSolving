#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#include<map>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en endl
#define MOD 998244353
#define ll long long
using namespace std;

int solve(int n){
    if(n%7==0){
        return n;
    }
    if(n<13){
        for(int i=n; ; i++){
            n++;
            if(n%7==0){
                return n;
            }
        }
    }
    if(n>994){
        for(int i=n;;i--){
            n--;
            if(n%7==0){
                return n;
            }
        }
    } 


    int num = (n/10)*10;
    for(int i=num+1; i<num+10; i++){
        if(i%7==0){
            return i;
        }
    }
    // if(n%7>=4){
    //     for(int i=n; ; i++){
    //         n++;
    //         if(n%7==0){
    //             return n;
    //         }
    //     }
    // }
    // if(n%7<=3){
    //     for(int i=n;;i--){
    //         n--;
    //         if(n%7==0){
    //             return n;
    //         }
    //     }
    // }
    // for(int i=1; i<7; i++){
    //     if((n-i)%7==0){
    //         if(n-i>=10)
    //         return n-i;
    //     } if((n+i)%7==0){
    //         if(n+i>=10)
    //         return n+i;
    //     }
    // }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int result = solve(n);
        ans;
    }
       
}
