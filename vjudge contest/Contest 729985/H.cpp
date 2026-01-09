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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    vector<string> s2;
    cin>>s;
    int count = 1;
    sort(s.begin(), s.end());
    s2.push_back(s);
    while(next_permutation(s.begin(), s.end())){
        s2.push_back(s);
        count++;
    }

    cout<<count<<en;
    for(int i=0; i<s2.size(); i++){
        cout<<s2[i]<<en;
    }

    
}
