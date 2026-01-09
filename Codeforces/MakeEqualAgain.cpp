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
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int fist;
        int num = a[0];
        bool alSame = true;
        for(int i=0; i<n; i++){
            if(a[i]!=num){
                fist = i-1;
                alSame = false;
                break;
            }
        }
        int last;
        for(int i=n-1; i>=0;i--){
            if(a[i]!=num){
                last = i;
                break;
            }
        }
        int result1=last-fist;

        num = a[n-1];

        for(int i=n-1; i>=0;i--){
            if(a[i]!=num){
                last = i;
                break;
            }
        }

        for(int i=0; i<n; i++){
            if(a[i]!=num){
                fist = i-1;
                alSame = false;
                break;
            }
        }

        int result2 = last - fist;
        // cout<<fist<<" "<<last<<e;
        if(n==1 || alSame){
            cout<<0<<e;
        } else if(result1<result2){
            cout<<result1<<e;
        } else{
            cout<<result2<<e;
        }
        // cout<<last-fist<<e;
    }
}