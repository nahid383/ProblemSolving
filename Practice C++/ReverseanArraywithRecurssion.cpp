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

void reverseArray(vector<int> &a, int left, int right){
    if(left>=right){
        return;
    }

    swap(a[left], a[right]);

    reverseArray(a, left+1, right-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
       cin>>a[i];
    }

    reverseArray(a, 0,n-1);

     for(int i=0; i<n; i++){
       cout<<a[i]<<" ";
    }
}
