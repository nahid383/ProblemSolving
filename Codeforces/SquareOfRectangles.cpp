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
int main(){
    int t;
    cin>>t;
    while(t--){
        int l1, l2, l3, b1, b2, b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
        bool result = false;
        int area = l1*b1+l2*b2+l3*b3;
        int s = sqrt(area);

        // if(s!=area){
        //     no;
        //     continue;
        // }

        // if(l1==s && l2==s && l3==s && b1+b2+b3==s){
        //     result = true;
        // }

        // if(l1==s && b1+max(b2,b3)==s && l2+l3==s && b2==b3){
        //     result = true;
        // }

        // if(b1==s && b2==s && b3==s && l1+l2+l3==s){
        //     result = true;
        // }

        if(l1==l2 && l2==l3 && b1+b2+b3==l1){
            result=true;
        } else if(l1==l2+l3 && b2==b3 && b1+b2==l1){
            result=true;
        } else if(l1+l2==b1 && l2==l3 && b1==b2+b3){
            result=true;
        } else if(b1==b2 && b2==b3 && l1+l2+l3==b1){
            result=true;
        }
        if(result){
            yes;
        } else{
            no;
        }

    }
}