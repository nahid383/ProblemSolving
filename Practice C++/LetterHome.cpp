#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define e endl
#define ll long long
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        int maxima = INT16_MIN;
        int minima = INT16_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i];
            maxima = max(maxima,a[i]);
            minima = min(minima, a[i]);
        }

        int lowest = min(abs(minima-s), abs(maxima-s));

        int diff = maxima - minima;
        cout<<lowest+diff<<e;
    }
}