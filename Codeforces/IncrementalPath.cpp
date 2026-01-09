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
#define si set<int>
#define foriton for(long long i = 0; i < n; i++)
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
        string s;
        cin>>s;
        si a;
        for(int i=0; i<m; i++){
            int num;
            cin>>num;
            a.insert(num);
        }

        int st = 1;
        for(int i=0; i<n; i++){
            st++;

            if(s[i]=='B'){
                while(a.count(st)){
                    st++;
                }
            }

            a.insert(st);

            if(s[i]=='B'){
                while(a.count(st)){
                    st++;
                }
            }
        }

        cout<<a.size()<<endl;
        
        for(auto &nine : a){
            cout<<nine<<" ";
        }

        en;

        

    }

}
