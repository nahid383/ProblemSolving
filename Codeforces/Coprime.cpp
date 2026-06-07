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
const int maxA = 1000;
bool coprime[maxA+1][maxA+1];

int gcdValue(int a, int b){
    while(b!=0){
        int temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}

void precompute(){
    for(int i=1; i<=maxA; i++){
        for(int j=1; j<=maxA; j++){
            if(gcdValue(i, j)==1){
                coprime[i][j]=true;
            } else{
                coprime[i][j]=false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi last(maxA+1, -1);
        foriton(n){
            int x;
            cin>>x;
            last[x] = i+1;
        }

        int res = -1;
        for(int i=1; i<=maxA; i++){
            if(last[i]==-1){
                continue;
            }
            for(int j=1; j<=maxA; j++){
                if(last[j]==-1){
                    continue;
                }
                if(coprime[i][j]){
                    res=max(res, last[i]+last[j]);
                }
            }
        }

        cout<<res<<endl;
    }
}