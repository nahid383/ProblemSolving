#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"0\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double n,l;
    cin>>n>>l;
    vector<double> a(n);
    foriton{
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    double max_d = 0;
    for(int i=0; i<n-1; i++){
        double dis = (a[i+1]-a[i])/2.0;
        if(dis>max_d){
            max_d=dis;
        }
    }
    double fst_d = a[0]-0;
    double lst_d = l-a[n-1];

    // double res = max(fst_d,lst_d);
    double result = max({fst_d,max_d,lst_d});
    cout<<fixed<<setprecision(10)<<result<<en;

}
