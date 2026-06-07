#include<iostream>
using namespace std;

void reversePrint(int n){
    if(n==0){
        return;
    }
    
    cout<<n<<" ";
    reversePrint(n-1);
}

int main(){
    int n;
    cin>>n;
    reversePrint(n);
}