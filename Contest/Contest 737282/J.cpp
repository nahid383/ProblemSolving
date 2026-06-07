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
#define foritom for(long long i=0; i<m; i++)
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> desired(n);
    vector<int> size(m);
    foriton{
        cin>>desired[i];
    } 
    foritom{
        cin>>size[i];
    }
    sort(desired.begin(), desired.end());
    sort(size.begin(), size.end());
    int count = 0;
    for(int i=0, j=0; i<n && j<m;){
        
            if(abs(desired[i] - size[j]) <= k) {
            count++; 
            i++;  
            j++;  
        } else if(size[j] < desired[i] - k) {
            j++;  
        } else {
            i++;  
        }
        }

    countt;
}
