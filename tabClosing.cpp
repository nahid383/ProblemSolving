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
#define pb(x) push_back(x) 
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i] <<" ";
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        // int moves = 0;
        // int idx = 1;
        // int m=n;
        // set<int> st;
        // for(int i=n; i>=1; i--){
        //     if(a/i<=b){
        //         int len = min(b, a/i);
                
        //         // moves += 1LL * len * i;
        //         // if(len>2){
        //         //     if(len%2==0){
        //         //         st.insert(1);
        //         //     } else{
        //         //         st.insert(2);
        //         //     }
        //         // } else

        //         // if(len<b)
        //         st.insert(len);
        //         if(len==b){
        //             break;
        //         }
        //     }
        //     // a=a/i;
        //     // int len = min(b, a/i);
        //     // if(len<=b){
        //     //     st.insert(len);
        //     // }
            
        // }
        // // if(st.size()>2){
        // //     if(st.size()%2==0){
        // //         cout<<1<<endl;
        // //     } else{
        // //         cout<<2<<endl;
        // //     }

        // //     continue;
        // // }
        // cout<<st.size()<<endl;

        if(a==b){
            cout<<1<<endl;
            continue;
        } else if(n==1 && a!=b){
            cout<<1<<endl;
        } else if(b*n<=a){
            cout<<1<<endl;
        } else {
            cout<<2<<endl;
        }
        // int mul = b*n;
        // if(mul<=a){
        //     cout<<1<<endl;
        // } else{
        //     cout<<2<<endl;
        // }
    }
}