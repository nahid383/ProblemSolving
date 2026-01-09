/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mone cout << "-1\n"
#define ans cout << result << "\n"
#define countt cout << count << "\n"
#define vl vector<ll>
#define vi vector<int>
#define vs vector<string>
#define foriton for(long long i = 0; i < n; i++)
#define forntoi for(long long i = n - 1; i >= 0; i = i - 2)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

void solve(){
    int n, m;
        cin>>n>>m;
        vl a(n);

        foriton {
            cin>>a[i];
            
        }

        ll b;
        cin>>b;

        

        bool is_valid = true;

        for (int i = 1; i < n; i++) {
            // if ((a[i] - 1 <= a[i]) && (a[i - 1] <= bb - a[i])) {
            //     a[i] = min(a[i], bb - a[i]);
            // } else if (a[i - 1] <= a[i]) {
            //     continue;
            // } else if (a[i - 1] <= bb - a[i]) {
            //     a[i] = bb - a[i];
            // }

            // if (a[i] < a[i - 1]) {
            //     is_valid = false;
            //     break;
            // }
            if(a[i]<a[i-1]){
                is_valid=false;
                break;
            }
        }

        if (is_valid) {
            yes;
            return;
        } 

        a[0] = min(a[0], b - a[0]);

        for(int i=1; i<n; i++){
            if(min(a[i], b-a[i])>=a[i-1]){
                a[i]=min(a[i], b-a[i]);
            } else{
                if(max(a[i], b-a[i])>=a[i-1]){
                    a[i]=max(a[i], b-a[i]);
                } else{
                    no;
                    return;
                }
            }
        }
        yes;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
        

    }

    return 0;
}
