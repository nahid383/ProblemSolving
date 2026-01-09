#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#define e endl
#define ll long long
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    map<string, string> names;
    
    
  

    for(int i=0; i<n; i++){
        string name;
        string ip;
        cin>>name>>ip;

        names[ip] = name;
    }

    for(int j=0; j<m; j++){
        string name2;
        string ip2;
        cin>>name2>>ip2;
        cout<<name2<<" "<<ip2<<"#";
        ip2.pop_back();
        cout<<names[ip2]<<e;
    }
}