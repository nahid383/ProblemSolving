#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#include<map>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define en endl
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       int t;

       cin>>t;
       while(t--){
            int n,m;
            cin>>n>>m;
            vector<vector<int>> a(n, vector<int> (m));
            int maxi = 0;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cin>>a[i][j];
                    maxi = max(maxi, a[i][j]);
                }
            }
            vector<int> rMaxi(n,0), cMaxi(m,0);

            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    rMaxi[i] = max(rMaxi[i], a[i][j]);
                    cMaxi[j] = max(cMaxi[j], a[i][j]);
                }
            }

            int result = maxi;

            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){

                    int maxx = 0;

                    for(int k=0; k<n; k++){
                        for(int l=0; l<m; l++){
                            int val = a[k][l];

                            if(k==i || l==j){
                                val--;

                            }
                            maxx = max(maxx, val);
                        }
                    }

                    result = min(result, maxx);
                }
            }
            ans;

       }
}
