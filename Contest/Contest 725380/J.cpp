#include<iostream>
#include<algorithm>
#include<queue>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    queue<int> qu;
    while(q--){
        int a;
        cin>>a;
        if(a==1){
            int n;
            cin>>n;
            qu.push(n);
        } else if(a==2){
            if(!qu.empty()){
                qu.pop();
            } 
        } else if(a==3){
            if(!qu.empty()){
                cout<<qu.front()<<'\n';
            } else{
                cout<<"Empty!\n";
            }
        }
    }

}