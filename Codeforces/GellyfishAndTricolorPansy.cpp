#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b<=a && b<=c){
            cout<<"Gellyfish"<<endl;
        }
        else if(a<d){
            cout<<"Flower"<<endl;
        }
        else if(d<=c){
            cout<<"Gellyfish"<<endl;
        }
        else{
            cout<<"Flower"<<endl;
        }
    }
}