#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define ll long long
#define e endl
using namespace std;
int main(){
    int n;
    cin>>n;
    char grid[n+1][n+1];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        cin>>grid[i][j];
        }

    }
    bool isX = true;
    if(grid[0][0]!=grid[0][n-1] || grid[0][0]!=grid[n-1][0] || grid[0][0]!=grid[n-1][n-1]){
        isX = false;
    }
    int count1=0;
    int count2=0;
    int xCount = (2*n)-1;
    int yCount = (n*n)-xCount;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]==grid[0][0]){
                count1++;
            } else if(grid[i][j]==grid[0][1]){
                count2++;
            }
            if((i==j && grid[i][j]!=grid[0][0]) && ((i+j==n-1) && grid[i][j]!=grid[0][0])){
                isX=false;
            }
        }
    }
    for(int i=1; i<n-1; i++){
        for(int j=0;j<1; j++){
            if(grid[0][0]==grid[i][j]){
                isX=false;
            }
        }
    }
    for(int i=0; i<1; i++){
        for(int j=1;j<n-1; j++){
            if(grid[0][0]==grid[i][j]){
                isX=false;
            }
        }
    }
    if(xCount==count1 && yCount==count2 && isX){
        cout<<"YES"<<e;
    } else{
        cout<<"NO"<<e;

    }


}

/*
question a chaise j string a jodi character gulo diye kono x 
banano thake and x er charcater gulo same hoy and onno shob 
charcter same hoi tahole yes nahole no
x er shurur character tw sobsomoy grid[0][0] hbe and baki 
charcter gulo [0][1] hote hbe.
tai [0][0] er charcter kotogulo ache sheta count korbo and 
baki charcter gulo count korbo
then x houar jonno (2*n-1) character lagbe. so jodi [0][0] c
character jodi (2*n-1) sonkhok thake and baki charcter er count
jodi [0][1] er sathe match kore tahole yes nahole no



*/