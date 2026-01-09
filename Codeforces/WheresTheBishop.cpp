#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char str[8][8];
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>str[i][j];
            }
        }
        int row,col;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(str[i][j]=='#' && str[i-1][j-1]=='#' && str[i+1][j-1]=='#' && str[i-1][j+1]=='#' && str[i+1][j+1]=='#'){
                    row=i+1;
                    col=j+1;
                }
            }
        }
        cout<<row<<" "<<col<<endl;
    }

}