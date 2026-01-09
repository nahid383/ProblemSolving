#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char grid[3][3];
        int ques;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>grid[i][j];
                if(grid[i][j]=='?'){
                    ques = i;
                }
            }
        }
        int a = 0, b= 0, c =0;
        for(int i=0; i<3; i++){
            for(int j = 0; j<3; j++){
                if(ques == i){
                    if(grid[i][j]=='A'){
                        a++;
                    } else if(grid[i][j]=='B'){
                        b++;
                    } else if(grid[i][j]=='C'){
                        c++;
                    }
                }
            }
        }
        if(c==0){
            cout<<"C"<<endl;
        } else if(b==0){
            cout<<"B"<<endl;
        } else{
            cout<<"A"<<endl;
        }
    }
}