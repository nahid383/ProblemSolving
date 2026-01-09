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
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 2e5 + 5;
ll fact[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    fact[0]=1;
    for(ll i=1; i<MAX; i++){
        fact[i] = (fact[i-1]*i)%MOD;
    }
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll len = s.length();
        ll cnt=0;
        ll temp=0;
        vl v;
        foriton(len-1){
            if(s[i]==s[i+1]){
                cnt++;
                temp++;
            } else{
                if(temp>0){
                    v.push_back(temp);
                    temp=0;
                }
            }
        }
        if(temp>0){
            v.push_back(temp);
        }

        cout<<cnt;

        ll o=0;
        ll noo=1;
        foriton(v.size()){
            o=o+v[i];
            noo=(noo*(v[i]+1))%MOD;
        }
        noo = (noo*fact[cnt])%MOD;
        cout<<" "<<noo<<endl;
    }
}