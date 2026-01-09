#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define ll long long
#define e endl
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        string decrypt="";
        // int idx = 0;
        int i=0;
        while(i<n){
            char ch = s[i];
            int j = i+1;
            while(j<n && s[j]!=ch){
                j++;
            }

            decrypt+=ch;
            i=j+1;
        }
 

        cout<<decrypt<<e;
    }
}