#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    char nahid[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>nahid[i][j];
        }
    }
    // cin>>nahid;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(nahid[i][j]!='.'){
                cout<<nahid[i][j];
            }
        }

    }
    cout<<endl;
    }

}