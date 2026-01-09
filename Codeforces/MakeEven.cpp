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
#define in(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define forntoi for (long long i = n - 1; i >= 0; i = i - 2)
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
            
            if(n%2==0){
                cout<<0<<endl;
                continue;
            }
            string s = to_string(n);
            
            bool isOdd = true;
            int l = s.length();            
            for(int i=0; i<l; i++){
                int m = s[i]-'0';
                if(m%2==0){
                    isOdd=false;
                }
            }

            if(isOdd){
                mone;
                continue;
            }

            int f = s[0]-'0';
            int g = s[l-1]-'0';

            if(f%2==0 && g%2!=0){
                cout<<1<<endl;
                continue;
            }

            if(f%2!=0 && g%2!=0){
                cout<<2<<endl;
                continue;
            }

        }
}