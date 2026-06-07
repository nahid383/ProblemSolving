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
ll n;
vl bit;

void update(ll id, ll val){
    while(id<=n){
        bit[id]+=val;
        id += (id & -id);
    }
}

ll query(ll id){
    ll sum=0;
    while(id>0){
        sum += bit[id];
        id -= (id & -id);
    }

    return sum;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll z=1;
    while(1){
    cin>>n;
    if(n==0){
        return 0;
    }
    if(z>1){
        cout<<"\n";
    }
    bit = vl (n+1, 0);
    vl a(n+1);
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        update(i, a[i]);
    }
    cout<<"Case "<<z<<":"<<endl;
    z++;
    while(1){
        string s;
        cin>>s;
        if(s=="S"){
            ll id, val;
            cin>>id>>val;
            update(id, -a[id]);
            a[id] = val;
            update(id, a[id]);
        } else if(s=="M"){
            ll x,y;
            cin>>x>>y;
            ll res = query(y) - query(x-1);
            cout<<res<<endl;
        } else if(s=="END"){
            break;
        }
    }
    
    }
}