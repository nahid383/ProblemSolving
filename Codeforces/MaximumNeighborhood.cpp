/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mone cout << "-1\n"
#define ans cout << result << "\n"
#define countt cout << count << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
#define all(a) a.begin(), a.end()
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        // ll cost = 0;
        // ll sq = n*n;
        // cost += sq;
        // if(sq-1>0){
        //     cost+=sq-1;
        // }
        // // if(sq-2>0  && n>2){
        // //     cost+=sq-2;
        // // }
        // if(sq-n>0){
        //     cost+=sq-n;
        // }
        if(n==1){
            cout<<1<<endl;

        } else if(n==2){
            cout<<9<<endl;
        } else if(n==3){
            cout<<29<<endl;
        } else if(n==4){
            cout<<56<<endl;
        } else{
            cout<<(n*n)-1+(n*n-1-n)+(n*n-n)+(n*n-n-2)+(n*n-1-2*n)<<endl;
        }
        // cout<<cost<<endl;
    }
}