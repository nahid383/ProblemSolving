#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string name;
        cin>>name;
        int maximum = 0;
        for(int i=0; i<n; i++){
            int asciiValue = int(name[i]);
            if(asciiValue>maximum){
                maximum=asciiValue;
            }
        }
        cout<<maximum-96<<endl;

    }
}