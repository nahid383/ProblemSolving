#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        for(int i=0; i<n; i++){
            char character = 'a';
            for(int j=0; j<k; j++){
                cout << character;
                character++;
            }
        }
        cout<<endl;
    }
}