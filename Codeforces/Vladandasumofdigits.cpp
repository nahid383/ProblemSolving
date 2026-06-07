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
const int MAX = 2e5 + 5;
ll p[MAX];

int f(int n){
    int s = 0;
    while(n>0){
        s+=n%10;
        n/=10;
    }

    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    p[0]=0;
    for(int i=1; i<MAX; i++){
        p[i] = p[i-1] + f(i);
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<p[n]<<endl;
    }
}