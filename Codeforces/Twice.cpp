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
        int n;
        cin>>n;
        int freq[100001]={0};
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        int score = 0;
        for(int i=0; i<100001; i++){
            score+=(freq[i]/2);
        }

        cout<<score<<e;
    }
}