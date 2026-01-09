
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
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main(){
    ll n;
    cin>>n;
    vl a(n);
    ll total = 0;
    foriton(n){
        cin>>a[i];
        // total+=a[i];
    }

    sorted(a);
    // int sum  = (n*(n+1))/2;
    // int mini = *min_element(a.begin(),a.end());
    // int sum =0;
    // int i=0;
    // while(i!=n){
    //     sum=sum+mini;
    //     mini++;
    //     i++;
    // }

    for(ll i=1; i<n; i++){
        if(a[i]<=a[i-1]){
            ll f = a[i-1]+1;
            total+=(f-a[i]);
            a[i]=f;
        }
    }

    cout<<total<<endl;
}