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
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

bool isCommon(ll a, ll b){
    bool digits[10] = {false};

    while(a>0){
        digits[a%10]=true;
        a/=10;
    }

    while(b>0){
        if(digits[b%10]){
            return true;
        }

        b/=10;
    }
    // set<char> digitsa(to_string(a).begin(), to_string(a).end());
    // set<char> digitsb(to_string(b).begin(), to_string(b).end());
    // for(char d:digitsa){
    //     if(digitsb.count(d)){
    //         return true;
    //     }
    // }

    return false;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll n;
    cin>>n;

    ll count = 0;

    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            ll d1 = i;
            ll d2 = n/i;
            if(isCommon(n,d1)){
                count++;
            }
            if(d1!=d2 && isCommon(n,d2)){
                count++;
            }
        }
    }

    cout<<count<<endl;

}