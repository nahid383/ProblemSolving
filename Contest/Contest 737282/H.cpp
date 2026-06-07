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
void merge(vector<int> &numbers, int st, int mid, int end){
    vector<int> temp;

    int i=st, j=mid+1;
    while(i<=mid && j<=end){
        if(numbers[i]<=numbers[j]){
            temp.push_back(numbers[i]);
            i++;
        } else{
            temp.push_back(numbers[j]);
            j++;
        }
        
    } 
    while(i<=mid){
        temp.push_back(numbers[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(numbers[j]);
        j++;
    }

    for(int idx = 0; idx<temp.size(); idx++){
        numbers[idx+st] = numbers[idx];
    }
}
void mergesort(vector<int> &numbers, int st, int end){
    if(st<end){
        int mid = st + (end-st)/2;

        mergesort(numbers, st, mid);
        mergesort(numbers, mid+1, end);

        merge(numbers, st, mid, end);

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    vector<int> numbers;
    while(cin>>x){
        numbers.push_back(x);
    }
    mergesort(numbers, 0, (int)numbers.size()-1);
    int n = (int)numbers.size();
    for(int i=0; i<n; i++){
        cout<<numbers[i]<<" ";
    }
}
