/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/

#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define vs vector<string>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i=i-2)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char grid[3][3];
    int countX = 0;
    int count0 = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>grid[i][j];
            if(grid[i][j]=='X'){
                countX++;
            } else if(grid[i][j]=='0'){
                count0++;
            }
        }
    }
    if(abs(count0-countX)>1){
        cout<<"illegal";en;
        return 0;
    }
    if(count0>countX){
        cout<<"illegal";en;
        return 0;
    }

    bool firstWon = false;
    bool secondWon = false;
    if(grid[0][0]=='X' && grid[0][1]=='X' && grid[0][2]=='X'){
        firstWon=true;
    } else if(grid[1][0]=='X' && grid[1][1]=='X' && grid[1][2]=='X'){
        firstWon=true;
    } else if(grid[2][0]=='X' && grid[2][1]=='X' && grid[2][2]=='X'){
        firstWon=true;
    } else if(grid[0][0]=='X' && grid[1][0]=='X' && grid[2][0]=='X'){
        firstWon=true;
    } else if(grid[0][1]=='X' && grid[1][1]=='X' && grid[2][1]=='X'){
        firstWon=true;
    } else if(grid[0][2]=='X' && grid[1][2]=='X' && grid[2][2]=='X'){
        firstWon=true;
    } else if(grid[0][0]=='X' && grid[1][1]=='X' && grid[2][2]=='X'){
        firstWon=true;
    } else if(grid[0][2]=='X' && grid[1][1]=='X' && grid[2][0]=='X'){
        firstWon=true;
    }

    if(grid[0][0]=='0' && grid[0][1]=='0' && grid[0][2]=='0'){
        secondWon=true;
    } else if(grid[1][0]=='0' && grid[1][1]=='0' && grid[1][2]=='0'){
        secondWon=true;
    } else if(grid[2][0]=='0' && grid[2][1]=='0' && grid[2][2]=='0'){
        secondWon=true;
    } else if(grid[0][0]=='0' && grid[1][0]=='0' && grid[2][0]=='0'){
        secondWon=true;
    } else if(grid[0][1]=='0' && grid[1][1]=='0' && grid[2][1]=='0'){
        secondWon=true;
    } else if(grid[0][2]=='0' && grid[1][2]=='0' && grid[2][2]=='0'){
        secondWon=true;
    } else if(grid[0][0]=='0' && grid[1][1]=='0' && grid[2][2]=='0'){
        secondWon=true;
    } else if(grid[0][2]=='0' && grid[1][1]=='0' && grid[2][0]=='0'){
        secondWon=true;
    }

    if(firstWon&&secondWon){
        cout<<"illegal";en;
        return 0;
    }
    if(firstWon && count0>=countX){
        cout<<"illegal";en;
        return 0;
    }
    if(secondWon && countX>count0){
        cout<<"illegal";en;
        return 0;
    }
    if(firstWon){
        cout<<"the first player won";en;
        return 0;
    } else if(secondWon){
        cout<<"the second player won";en;
        return 0;
    }

    

    if((countX<=4 && count0<=4) && countX<count0){
        cout<<"first";en;
        return 0;
    } else if((countX<=4 && count0<=4) && countX>count0){
        cout<<"second";en;
        return 0;
    } else if((countX<=4 && count0<=4) && countX==count0){
        cout<<"first";en;
        return 0;
    } 

    cout<<"draw";en;
    return 0;
    
}
