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
#define pb(x) push_back(x) 
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

pair<int,int> calc(const string &a, const string &b) {
    int A=0, B=0;
    int n = a.size();
    vector<int> ca(10,0), cb(10,0);

    for(int i=0; i<n; i++){
        if(a[i]==b[i]) 
            A++;
        else{
            ca[a[i]-'0']++;
            cb[b[i]-'0']++;
        }
    }
    for(int d=0; d<10; d++) 
    B += min(ca[d], cb[d]);
    return {A,B};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    map<int, vector<string>> perms;

    for(int x:{12,123,1234}){
        string s = to_string(x);
        sorted(s);
        vector<string> p;
        do p.push_back(s);
        while(next_permutation(s.begin(), s.end()));
        perms[x]=p;
    }

    while(t--){
        int n,j,k;
        cin>>n>>j>>k;

        const auto &v = perms[n];
        string a=v[j-1], b=v[k-1];
        auto res=calc(a,b);
        cout<<res.first<<"A"<<res.second<<"B\n";
    }
    return 0;
}
