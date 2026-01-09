/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mone cout << "-1\n"
#define ans cout << result << "\n"
#define countt cout << count << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define foriton for(long long i = 0; i < n; i++)
#define in(a,n) for(long long i=0; i<n; i++) cin>>a[i];
#define forntoi for(long long i = n - 1; i >= 0; i = i - 2)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        in (a,n);

        if(n<=2){
            yes;
            continue;
        }
        bool valid = true;
        for(int i=0; i<n-2; i++){
            ll result = __gcd(lcm(a[i], a[i+1]), lcm(a[i+1], a[i+2]));
            if(result!=a[i+1]){
                no;
                valid = false;
                break;
            }
        }

        if(valid)
        yes;

        

    }
    return 0;
}
