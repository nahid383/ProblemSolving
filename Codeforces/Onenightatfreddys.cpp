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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,m,l;
        cin>>n>>m>>l;
        vl a(n);
        scan(a, n);
        vl c(m, 0);
        int rem = n;
        for(int i = 0; i <= n; i++){
            int d;
            if(i==0){
                d = a[0]-1;
            } else if(i==n){
                d = l-a[n-1];
            } else{
                d = a[i]-a[i-1];
            }

            sorted(c);
            int size = min(rem+1, m);

            while(d>0){
                sorted(c);
                int mx = c[m-1];
                bool ok = false;
                for(int j = m-size; j<m && d>0; j++){
                    int need = mx-c[j];
                    if(need>0){
                        int add = min((ll)d,(ll)need);
                        c[j] += add;
                        d -= add;
                        ok = true;
                    }
                }
                if(!ok) break;
            }

            sorted(c);

            int avg = d/size;
            int extra = d%size;

            for(int j = m-size, k=0; j<m; j++, k++){
                c[j] += avg;
                if(k<extra){
                    c[j]++;
                }
            }

            if(i<n){
                sorted(c);
                c[m-1]=0;
            }

            rem--;
        }

        sorted(c);

        cout<<c[m-1]<<endl;
    }
}