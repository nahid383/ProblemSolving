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
        int a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;

        int x[]={a,a,-a,-a,b,b,-b,-b};
        int y[]={b,-b,b,-b,a,-a,a,-a};

        int kx[8], ky[8];
        for(int i=0; i<8; i++){
            kx[i]=xk+x[i];
            ky[i]=yk+y[i];
        }
        int qx[8],qy[8];
        for(int i=0; i<8; i++){
            qx[i]=xq+x[i];
            qy[i]=yq+y[i];
        }
        int count = 0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(kx[i]==qx[j] && ky[i]==qy[j]){
                    count++;
                }
            }
        }

        if(a==b){
            count/=4;
        }

        countt;

    }

}
