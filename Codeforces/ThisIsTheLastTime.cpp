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
#define mone cout<<"0"<<endl
#define ans  cout<<result<<endl
#define en endl
#define MOD 998244353
#define ll long long
using namespace std;
// void solve(int n, int k){
//       vector<int> l(n);
//       vector<int> r(n);
//       vector<int> real(n);
//       int maxCoin = k;
//       int currentCoin = k;
//       for(int i=0; i<n; i++){
//         cin>>l[i]>>r[i]>>real[i];
//         if(l[i]<=currentCoin && currentCoin<=r[i]){
//           if(real[i]>maxCoin){
//             maxCoin=real[i];
//             currentCoin=real[i];
//           }
//         }
//       }

//       cout<<maxCoin<<en;
      
// }
struct coins{
  int l,r,real;
};

bool comp(const coins &f, const coins &s){
  return f.l<s.l;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<coins> v(n);
        for(int i=0; i<n; i++){
          cin>>v[i].l>>v[i].r>>v[i].real;
        }

        sort(v.begin(), v.end(), comp);

        int result=k;
        for(int i=0; i<n; i++){
          if(result>=v[i].l && result<=v[i].r){
            result=max(result, v[i].real);
          }
        }

        ans;
    }
       
}
