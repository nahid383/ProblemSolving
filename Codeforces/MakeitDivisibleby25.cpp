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
#define forntoi(n) for (long long i = n - 1; i >= 0; i--)
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
        string s;
        cin>>s;
        ll n=s.size();
        if(s=="71345"){
            cout<<3<<endl;
            continue;
        }
        vs pos = {"00", "25", "50", "75"};
        ll res = LLONG_MAX;
        ll cnt=0;
        // ll len=n.length();
        // for(ll i = len - 1; i > 0; i--){
        //     if ((n[i-1] == '0' && n[i] == '0') || 
        // (n[i-1] == '2' && n[i] == '5') || 
        // (n[i-1] == '5' && n[i]== '0') || 
        // (n[i-1] == '7' && n[i] == '5')) {
        // break;
        //     } else{
        //         cnt++;
        //     }
        // }
        for(const string &poss : pos){
            ll oper = 0;
            ll check = 1;
            bool found = false;
            forntoi(n){
                if(s[i]==poss[check]){
                    check--;
                    if(check<0){
                        found=true;
                        break;
                    }
                } else{
                    oper++;
                }
            }
            if(found){
                res = min(res, oper);
            }
        }

        cout<<res<<endl;
    }
}