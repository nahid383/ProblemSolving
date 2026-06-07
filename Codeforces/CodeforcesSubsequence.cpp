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

void solve(ll w){
    string s = "codeforces";

    ll cnt[10];
    foriton(10){
        cnt[i] = 1;
    }

    ll total = 1;

    while(total<w){
      foriton(10){
        total+=total/cnt[i];
            cnt[i]++;

            if (total >= w) {
                break;
            }
      } 
      if(total>=w){
        break;
      }
    }

    foriton(10){
      for(ll j=0; j<cnt[i]; j++){
        cout<<s[i];
      }
    }
    en;

}
int main(){
    ll w,h;
    cin>>w;
    solve(w);
}