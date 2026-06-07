#include<iostream>
#include<vector>
#define ll long long
using namespace std;

void solve(ll n){
    ll F[] = {1,3,2,-1,-3,-2};
    ll sum = 0;
    ll loop = n/6;
    ll rem = n%6;

    for(int i=0; i <rem; i++){
        sum += F[i];
    }

    cout << sum << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        solve(n);
    }
}
