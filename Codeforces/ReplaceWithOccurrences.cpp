/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define vs vector<string>
#define bo bool 
#define iP isPossible
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i=i-2)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<vector<int>> a(n+1);

        foriton{
            int val;
            cin>>val;

            a[val].push_back(i);
        }

        bool isNot = true;

        for(int i=1; i<=n; i++){
            if(!a[i].empty()){
                if(a[i].size()%i!=0){
                    isNot=false;
                    break;
                }
            }
        }

        if(!isNot){
            mone;

            continue;
        }


        vi result(n);
        int count = 1;

        for(int i=1; i<=n; i++){
            if(!a[i].empty()){
                const vector<int>& idx = a[i];

                int num = idx.size()/i;

                for(int j=0; j<num; j++){
                    for(int k=0; k<i; k++){
                        int orig = idx[j*i+k];

                        result[orig] = count;
                    }

                    count++;
                }

            }
        }

        for(int i=0; i<n; i++){
            cout << result[i] << (i == n - 1 ? "" : " ");
        }
        en;
        
 
        
 
        
 
        
    }
    
}