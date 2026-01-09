#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"0\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i--)
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;
int digitSum(int n){
    ll sum = 0;
    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }

    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll rem = n%10;
        // if(n%2==0){
        //     if(rem==9){
        //         cout<<n+2<<en;
        //     } else{
        //         cout<<n+2<<en;
        //     }
        // } else{
        //     if(rem%2==0){
        //         cout<<n+1<<en;
        //     } else{
        //         cout<<n+2<<en;
        //     }
        // }
        ll initial = digitSum(n)%2;
        ll x = n+1;
        while(digitSum(x)%2==initial){
            x++;
        } 
        cout<<x<<en;
    //     int l=n.length();
    //     int sum = 0;
    //     for(int i=0; i<l; i++){
    //         sum=sum+n[i]-'0';
    //     }
    //     bool isEven = false;
    //     if(sum%2==0){
    //         true;
    //     }
    //     int num = stoi(n);

    //     int num1=num+1;
    //     int num2=num+2;
    //     string s1, s2;
    //     s1 = to_string(num1);
    //     s2 = to_string(num2);
    //     int l1 =s1.length();
    //     int l2 =s2.length();
    //     int sum1 = 0;
    //     int sum2 = 0;
    //     for(int i=0; i<l1; i++){
    //         sum1+=s1[i];

    //     }
    //     for(int i=0; i<l2; i++){
    //         sum2+=s2[i];
    //     }

    // if(sum%2==0){
    //     if(sum1%2!=0){
    //         cout<<sum1<<en;
    //     } else{
    //     cout<<sum2<<en;
    //     }
    // } else{
    //         if(sum2%2==0){
    //     cout<<sum2<<en;
    //    } else{
    //    cout<<sum1<<en;
    //    }
    // }
}
}
