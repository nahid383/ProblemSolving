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
#define en endl
#define ll long long
using namespace std;
bool isConnsonant(char as){
    if(as!='a' && as!='e' && as!='i' && as!='o' && as!='u'){
        return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       int t;
       cin>>t;
       while(t--){
        int n, mon;
        cin>>n>>mon;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<=mon){
                cout<<1;
                mon-=a[i];
            } else{
                cout<<0;
            }
        }
        cout<<en;

       }
}