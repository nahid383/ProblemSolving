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
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        ll a=0, b=0;
        foriton(n){
            if(s[i]=='A'){
                a++;
            } else{
                b++;
            }
        }
        if(b==0){
            while(q--){
                ll a1;
                cin>>a1;
                cout<<a1<<endl;
            }
        }else{
            while(q--){
            ll a1;
            cin>>a1;
            ll s1 = 0;
            ll pos = 0;

            while(a1>0){
                foriton(n){
                    if(s[i]=='A'){
                        a1--;
                        s1++;
                        if(a1==0){
                            break;
                        }
                    } else{
                        a1=a1/2;
                        s1++;
                        if(a1==0){
                            break;
                        }
                    }
                }
                // if(s[pos]=='A'){
                //     a1=a1-1;
                // } else{
                //     a1=a1/2;

                // }
                // s1++;
                // pos=(pos+1)%n;
            }

            cout<<s1<<endl;

        }
        }
        
    }
}