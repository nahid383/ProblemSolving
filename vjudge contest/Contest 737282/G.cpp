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
void tower(int n, int st, int mid, int end){
    if(n==0){
        return;
    }

    tower(n-1, st,end,mid);
    cout<<st<<" "<<end<<endl;
    tower(n-1, mid, st, end);
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int a = pow(2,n);
    cout<<a-1<<endl;
    tower(n,1,2,3);


}
