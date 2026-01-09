/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D   D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/

#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i=i-2)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vi a(n);
        int count0=0, count1=0, count2=0,totalSum=0;
        foriton{
            cin>>a[i];
            if(a[i]==0){
                count0++;
            } else if(a[i]==1){
                count1++;
            } else{
                count2++;
            }
            totalSum+=a[i];
            
        }

        // int totalSum = count1+2*count2;

        if(totalSum>s){
           foriton{
            cout<<a[i]<<" ";
           }
           en;
           continue;
        }
        if(s==totalSum || (totalSum%2==0 && s%2==0) || (totalSum%2!=0 && s%2!=0)){
            mone;
            continue;
        }
        // if(s==0){
        //     if(count1>0 || count2>0){
        //         mone;
        //     } else{
        //        foriton{
        //         cout<<0<<" ";
        //        }
        //        en;
        //     }
        //     continue;
        // }
        
        if((s-totalSum)>1){
            mone;
            continue;
        }

        for(int i=0; i<count0; i++){
            cout<<0<<" ";
        }
        for(int i=0; i<count2; i++){
            cout<<2<<" ";
        }
        for(int i=0; i<count1; i++){
            cout<<1<<" ";
        }
        
        en;
        continue;
    }
}
