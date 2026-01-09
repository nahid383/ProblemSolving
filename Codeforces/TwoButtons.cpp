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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n;
        cin>>n;
        int sum = 0;
        for(int i=1; i<n; i++){
            sum+=(n-i)*i + 1;
        }
        sum++;
        cout<<sum<<en;
}