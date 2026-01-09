/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mone cout << "-1\n"
#define ans cout << result << "\n"
#define countt cout << count << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define foriton for(long long i = 0; i < m; i++)
#define forntoi for(long long i = n - 1; i >= 0; i = i - 2)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(m);

        foriton{
            cin>>a[i]; 
        }

        bool isPossible = false;
        
        int maxi=0;
        for(int i=0; i<m-1; i++){
            if(a[i]>=a[i+1]){
                isPossible=true;
            }
        }

        foriton{
            maxi=max(maxi, a[i]);
        }

        if(isPossible){
            cout<<1<<endl;
        } else{
            cout<<n-maxi+1<<endl;
        }

    }

}
