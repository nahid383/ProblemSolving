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
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int max = 0;
        vector<int> freq(MAX, 0);
        for(int i=0; i<n; i++){
            cin>>a[i];
            freq[a[i]]++;
            if(freq[a[i]]>max){
                max=freq[a[i]];
            }
        }
        
        cout<<n-max<<en;

    }
       
}
