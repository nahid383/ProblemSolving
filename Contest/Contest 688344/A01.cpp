#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin>>a>>b;
    int num1=a[a.size()-1]-'0';
    int num2=b[b.size()-1]-'0';
    if((num1%2==0 && num2%2==0) || (num1%2==1 && num2%2==1)){
        cout<<"Black"<<endl;
    } else{
        cout<<"White"<<endl;
    }
}