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
    // ll n;
    // cin>>n;
    // ll count = 0;
    // while(n>9){
    //     ll temp = n;
    //     ll sum = 0;
    //     while(temp>0){
    //         sum+=temp%10;
    //         temp=temp/10;
    //     }
    //     count++;
    //     n = sum;
    // }
    // ll result = count;
    // ans;

    string num;
    cin>>num;

    int count = 0;

    if(num.length()==1){
        cout<<"0"<<e;
        return 0;

    }

    while(num.length()>1){
        ll sum = 0;
        for(int i=0; i<num.length(); i++){
            sum += num[i]-'0';
        }

        count++;

        num = to_string(sum);
    }

    cout<<count<<e;
}