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
#define foriton for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define print(a, n) for (long long i = 0; i < n; i++) cout >> a[i];
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
        int n,k;
        cin>>n>>k;
        vi a(n);
        scan(a,n);
        vector<pair<int,int>> b;
        foriton{
            int rem = a[i]%k;
            if(rem==0){
                rem = k;
                
            }
            b.push_back({-rem, i+1});
        }
        sort(b.begin(), b.end());
        foriton{
            // for(int j=0; j<n; j++){
                // if(b[i]==k){
                //     break;
                // } else if(b[i]==a[j]){
                //     cout<<j+1<<" ";
                //     a[j]=-1;
                //     break;
                // }
                cout<<b[i].second<<" ";
            // }
        }
        en;
    }

}
