#include<iostream>
using namespace std;

void factorial(int n, int fact){
    if(n==1){
        cout<<fact<<endl;
        return;
    }
    fact*=n;
    factorial(n-1,fact);
    
}

int main(){
    int n;
    cin>>n;
    int fact = 1;
    factorial(n, fact);
}