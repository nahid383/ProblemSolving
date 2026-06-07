#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    if(r%2==0){
        cout<<(r*5)+c<<endl;

    }
    else{
        cout<<(r-1)*5+c<<endl;
    }
}