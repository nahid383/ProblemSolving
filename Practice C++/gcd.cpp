#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        } else{
            b=b%a;
        }
    }

    if(a==0){
        return b;
    }

    return a;
}
int lcm(int a,int b){
    int lcmm = (a*b)/gcd(a,b);
    return lcmm; 
}
int main(){
    int a=20, b=28;
    // int gcd =1;
    // for(int i=1; i<=min(a,b); i++){
    //     if(a%i==0 && b%i==0){
    //         gcd = i;
    //     }
    // }

    // cout<<gcd;

    cout<<"GCD="<<gcd(a,b)<<endl;
    cout<<"LCM="<<lcm(a,b)<<endl;
}