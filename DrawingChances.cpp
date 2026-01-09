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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;

        if(n%2!=0){
            no;
            continue;
        }
        int count1=0;
        int count0=0;
        for(int i=0; i<m; i++){
            if(s[i]=='0'){
                count0++;
            } else{
                count1++;
            }
        }
        
        int h = n/2;
        int reqa = h-count1;
        int reqb = h-count0;
        if (reqa<0||reqb<0) {
            no;
        } else if(reqa+reqb==(n-m)){
            yes;
        } else{
            no;
        }

    }

    return 0;
}
