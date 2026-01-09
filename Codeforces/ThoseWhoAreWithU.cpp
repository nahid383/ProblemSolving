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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
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
            vector<int> rowCount(n, 0), colCount(m, 0);
            int cnt = 0;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cin>>a[i][j];
                    maxi = max(maxi, a[i][j]);
                }
            }

            // vector<pair<int, int>> maxii;

            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(a[i][j]==maxi){
                        rowCount[i]++;
                        colCount[j]++;
                        cnt++;

                    }
                }
            }


            bool found = false;
            int result = maxi;
            // for(pair<int, int> p : maxii){
            //     int k = p.first;
            //     int l = p.second;
            //     int maxx = 0;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                            int val = rowCount[i]+colCount[j];

                            if(a[i][j]==maxi){
                                val--;
                            }
                            // maxx = max(maxx, val);
                            if(val==cnt){
                                found = true;
                                break;
                            }

                   
                }
                if(found){
                    break;
                }
            // }

        }
            if(found){
                cout<<maxi-1<<"\n";
            } else{
                cout<<maxi<<"\n";
            }

       }
}
