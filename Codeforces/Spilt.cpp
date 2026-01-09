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
#define all(a) a.begin(), a.end()
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vl a(2*n);
        vl freq(2*n+1, 0);
        ll distinct = 0;
        set<ll> st;;
        foriton(2*n){
            cin>>a[i];
            if(freq[a[i]]==0){
                distinct++;
            }
            freq[a[i]]++;
            st.insert(a[i]);
        }

        if(distinct==2*n){
            cout<<2*n<<endl;
            continue;
        } else if(distinct==1){
            if(n%2!=0)
            cout<<2<<endl;
            else
            cout<<0<<endl;
            continue;
        }
        // if(distinct==2 && n%2!=0){
        //     cout<<2<<endl;
        //     continue;
        // }
        

        ll maxvalue = 0;
        ll odd=0, even=0;

        for(auto x:st){
            if(freq[x]%2==0){
                even++;
            } else{
                odd++;
            }
        }
        
        if(odd==0){
            if(n%2!=even%2)
            even--;

        }
        cout<<odd+even*2<<endl;

    }
}