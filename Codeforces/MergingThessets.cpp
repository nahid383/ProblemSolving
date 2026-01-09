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
#define foriton for(long long i = 0; i < n; i++)
#define forntoi for(long long i = n - 1; i >= 0; i = i - 2)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

bool solve(int n,int m, vector<vector<int>> &st){
    vi freq(m+1, 0);

    foriton{
        for(int j=0; j<st[i].size(); j++){
            freq[st[i][j]]+=1;
        }
    }

    for(int i=1; i<=m; i++){
        if(freq[i]==0){
            return false;
        }
    }

    int ways=0;

    foriton{
        bool is = true;
        for(int j=0; j<st[i].size(); j++){
            if(freq[st[i][j]]==1){
                is = false;
                break;
            }
        }

        if(is){
            ways++;
        }

        if(ways>=2){
            return true;
        }
    }
    return false;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> st(n);

        foriton{
            int k;
            cin>>k; 
            st[i].resize(k);
            for(int j=0; j<k; j++){
                cin>>st[i][j];
            }
        }

        bool isPossible = solve(n,m,st);
        

        if(isPossible){
            yes;
        } else{
            no;
        }

    }

}
