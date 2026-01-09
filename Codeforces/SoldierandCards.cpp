
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
    int n;
    cin>>n;
    int maxq1=0;
    int maxq2=0;
    int k1;
    cin>>k1;
    queue<int> q1;
    vi a(k1);
    foriton(k1){
        cin>>a[i];
        maxq1 = max(maxq1, a[i]);
        q1.push(a[i]);
    }

    int k2;
    cin>>k2;
    queue<int> q2;
    vi b(k2);
    foriton(k2){
        cin>>b[i];
        maxq2 = max(maxq2, b[i]);
        q2.push(b[i]);
    }

    int count = 0;
    while(!q1.empty() && !q2.empty()){
        if(q1.front()>q2.front()){
            int c = q2.front();
            int d = q1.front();
            q1.pop();
            q2.pop();
            q1.push(c);
            q1.push(d);
            count++;
        } else{
            int c = q1.front();
            int d = q2.front();
            q1.pop();
            q2.pop();
            q2.push(c);
            q2.push(d);
            count++;
        }
        if(count>100000){
            mone;
            return 0;
        }
    }

    
    if(maxq1>maxq2){
        cout<<count<<" "<<1<<endl;
    } else{
        cout<<count<<" "<<2<<endl;
    }
}