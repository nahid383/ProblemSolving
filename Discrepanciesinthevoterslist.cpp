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
        
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    vi a(n1), b(n2), c(n3);

    scan(a, n1);
    scan(b, n2);
    scan(c, n3);

    unordered_map<int, int> freq;

    foriton(n1){
        freq[a[i]]++;
    }

    foriton(n2){
        freq[b[i]]++;
    }

    foriton(n3){
        freq[c[i]]++;
    }

    set<int> s;

    foriton(n1){
        if(freq[a[i]]>=2){
            s.insert(a[i]);
        }
    }

    foriton(n2){
        if(freq[b[i]]>=2){
            s.insert(b[i]);
        }
    }

    foriton(n3){
        if(freq[c[i]]>=2){
            s.insert(c[i]);
        }
    }

    cout<<s.size()<<endl;

    for(auto x:s){
        cout<<x<<endl;
    }

}