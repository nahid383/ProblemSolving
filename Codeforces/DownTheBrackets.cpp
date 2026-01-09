#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        // char stri[10001];
        string stri;        
        cin>>stri;
        int length = stri.length();
        int start = 0;
        int end = 0;
        int flag = 0;
        for(int i = 0; i<length; i++){
            if(stri[i]=='('){
                start++;
            }
            else{
                end++;
            }
            if(i!=length-1 && start-end==0){
                flag=1;
                break;
            }
        }
        int diff = start-end;
     
        // for(int i=0; i<length-1; i++){
        //     if(stri[i]==')' && stri[i+1]=='('){
        //         flag=0;
        //     }
        // }

        if(flag==1 && diff==0){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
}