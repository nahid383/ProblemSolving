#include<iostream>
using namespace std;
int factorial(int a){
    int fact = 1;
    for(int i=1; i<=a; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){ 
    int n,r;
    cin>>n>>r;
    int result = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<result;
}