#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char str[n+1];
        cin>>str;
        int countOne = 0;
        int countZero = 0;
        for(int i=0; i<n; i++){
            if(str[i]=='1'){
                countOne++;
            }
            else{
                countZero++;
            }
        }
        // countOne = countOne/2;
        // countZero = countZero/2;
        // if(countOne+countZero==k){
        //     cout<<"YES"<<endl;

        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        int maxPair = n/2;
        int x= maxPair-k;
        if(x<0 || countZero<x || countOne<x ||(countZero-x)%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}