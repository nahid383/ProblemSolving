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

int partition(vector<int> &a, int st, int end){
    int idx = st-1, pivot = a[end];

    for(int j=st; j<end; j++){
        if(a[j]<=pivot){
            idx++;
            swap(a[idx], a[j]);
        }
    }

    idx++;
    swap(a[end], a[idx]);
    return idx; 
}

void quickSort(vector<int> &a, int st, int end){
    if(st<end){
        int pivIdx = partition(a, st, end);
        quickSort(a, st, pivIdx-1);
        quickSort(a, pivIdx+1, end);
    }
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

     quickSort(a, 0, a.size()-1);

     for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
     }
     return 0;
}
