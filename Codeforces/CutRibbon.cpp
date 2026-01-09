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

    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int count=0;

    vector<int> ar={a,b,c};
    sort(ar.begin(), ar.end());   
    a=ar[0];
    b=ar[1];
    c=ar[2];
    
    for(int i=0; i<=n/a; i++){
        for(int j=0; j<=n/b; j++){
            int rem = n-(i*a+j*b);
            if(rem<0){
                continue;
            }

            if(rem%c==0){
                int k = rem/c;
                int total = i+j+k;
                count=max(count,total);
            }
        }
    }

    countt;
}
