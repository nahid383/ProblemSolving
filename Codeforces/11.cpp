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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string sm = s;
        // bool changed = true;

        // while (changed) {
        //     changed = false;
        //     for(int i=1; i<n-1; i++){
        //         if (sm[i] == '0' && sm[i-1] == '1' && sm[i+1] == '1'){
        //             sm[i] = '1';
        //             changed = true;
        //         }
        //     }
        // }

        for(ll i=1; i<n-1; i++){
            if(s[i-1]=='1'&&s[i+1]=='1'){
                s[i]='1';
            }
        }

        ll maxi = 0;
        for(ll i=0; i<n; i++){
            if(s[i]=='1'){
                maxi++;
            }
        }

        for(ll i=1; i<n-1; i++){
            if(s[i-1]=='1'&&s[i+1]=='1'){
                s[i]='0';
            }
        }

        ll mini = 0;
        for(ll i=0; i<n; i++){
            if(s[i]=='1'){
                mini++;
            }
        }


        // string sn = s;
        // changed = true;
        // while(changed){
        //     changed = false;
        //     for(int i=1; i<n-1; i++){
        //         if(sn[i] == '1' && sn[i-1] == '1' && sn[i+1] == '1'){
        //             sn[i] = '0';
        //             changed = true;
        //         }
        //     }
        // }

        // int min1 = 0;
        // for (int i = 0; i < n; i++) {
        //     if (s[i] == '1') {
        //         if (i == 0 || i == n - 1 || (s[i-1] == '0' || s[i+1] == '0')) {
        //             min1++;
        //         }
        //     }
        // }
        // int max1 = 0;
        // for (char c : sm) if (c == '1') max1++;

        cout << mini << " " << maxi << endl;
    }
}