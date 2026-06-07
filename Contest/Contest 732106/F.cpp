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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define en "\n"
#define MOD 998244353
#define ll long long
using namespace std;
const int MAX = 1e5+5;
int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int minima = gcd(a,b);
        int count = 0;
        for(int i=1; i*i<=minima; i++){
            if(minima%i==0){
                if(i*i==minima){
                    count++;
                } else{
                    count=count+2;
                }
            }
        }

        cout<<count<<endl;
    }
}
