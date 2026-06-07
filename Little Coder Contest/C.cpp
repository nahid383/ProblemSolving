#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#define e endl
#define ll long long
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
            cout<<"YES"<<e;
 
        }
        else{
            cout<<"NO"<<e;
        }
    }
}

/* 
robot correct bracket sequence break korte parbe kina ta dekhte hbe
output dekhe ekhane opening bracket and closing bracket count kori
jodi tader count same hoy and jodi [i]='(' and [i+1]=')' hoy tahole 
correct sequence break korte parbe na nahole parbe
*/