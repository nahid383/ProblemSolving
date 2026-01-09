#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std; 


bool allFrom1TokExist(vector<int>& a, vector<int>& b, int k) {
    vector<bool> seen(k+1, false);

    for(int num:a){
        if(num>=1 && num<=k){
            seen[num] = true;
        }
    }

    for(int num:b){
        if(num>=1 && num<=k){
            seen[num] = true;
        }
    }

    for(int i=1; i<=k; i++){
        if(!seen[i]){
            return false;
        }
    }

    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<int> b(m);
        for(int i=0; i<m; i++){
            cin>>b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<int> expected(k);

        for(int i=1; i<=k; i++){
            expected.push_back(i);
        }

        int acount = 0; 
        int bcount = 0;
        if(a[0]<=k){
            acount=1;
        }
        if(b[0]<=k){
            bcount=1;
        }
        for(int i=1; i<n; i++){
            if(a[i]<=k && a[i]!=a[i-1]){
                acount++;
            }
        }

        for(int i=1; i<m; i++){
            if(b[i]<=k && b[i]!=b[i-1]){
                bcount++;
            }
        }
        bool isexist = allFrom1TokExist(a,b,k);
        if(!isexist){
            no;
        }
        else if(acount>=k/2 && bcount>=k/2){
            yes;
        } else{
            no;
        }
    }
}