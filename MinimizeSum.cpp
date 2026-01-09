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
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define foriton for(long long i = 0; i < n; i++)
#define forntoi for(long long i = n - 1; i >= 0; i = i - 2)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin>>n>>m;
        vl a(n);

        ll sum = 0;
        foriton{
            cin>>a[i];
            sum+=a[i];
        }

        // vl rem(n);
        // foriton{
        //     rem[i]=a[i]%m;
        // }

        sort(a.begin(), a.end());
        // vi pref(n+1, 0);

        // foriton{
        //     pref[i+1]=pref[i]+a[i];
        // }

        // vi cand;
        // cand.push_back(0);
        // for (int kk:a) {
        //     int k=m-kk;
        //     if(k<m) 
        //     cand.push_back(k);

        // }

        // sort(cand.begin(), cand.end());
        // cand.erase(unique(cand.begin(),cand.end()),cand.end());
        // ll result = LLONG_MAX;
        // for (int k : cand) {
        //     int count = n-idx;
        //     ll s=sum+(ll)n*k-(ll)m*count;
        //     if(s<result) 
        //     result=s;
        // }

        ll result = LLONG_MAX;

        for(int k=0; k<m; k++){
            // ll oper = 0;
            int idx=lower_bound(a.begin(),a.end(),m-k)-a.begin();

            // foriton{
            //     if(rem[i]<=k){
            //         oper+=(k-rem[i]);
            //     } else{
            //         oper+=(m-rem[i]+k);
            //     }
            // }
            // mini=min(mini, oper);

            int count = n-idx;

            ll ss = sum+(ll)n*k-(ll)m*count;

            if(ss<result){
                result=ss;
            }
        }
        ans;
    






    }

    return 0;
}
