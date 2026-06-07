#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0; i<n; i++){
    cin>>a[i];
   }


    cout<<a[1] - a[0]<<" "<<a[n-1] - a[0]<<'\n';
   for(int i=1; i<n-1; i++){
        int res = min((a[i] - a[i-1]), (a[i+1] - a[i]));
        int res2 = max((a[n-1] - a[i]), (a[i] - a[0]));
        cout<<res<<" "<<res2<<'\n';
   }
   cout<<a[n-1] - a[n-2]<<" "<<a[n-1] - a[0]<<'\n';
}