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
#define print(a, n) for (long long i = 0; i < n; i++) cout << a[i];
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
        int n;
        cin>>n;
        vi a(n);

        int pos_min = 0, pos_max = 0;

        for (int i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]<a[pos_min]) 
            pos_min = i;
            if(a[i]>a[pos_max]) 
            pos_max = i;
        }

        int l = max(pos_min, pos_max)+1;
        int r = n-min(pos_min, pos_max);
        int mix = min(pos_min+1, n-pos_min) + min(pos_max+1, n-pos_max);

        int moves = min({l,r,mix});

        cout<<moves<<"\n";
    }
    
    return 0;
}
