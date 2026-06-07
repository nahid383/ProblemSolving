#include<iostream>

#include<vector>

using namespace std; 

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<int> s;

    while(t--){
        int a;
        cin>>a;
        // s.push(b);
        // cin>>a>>b;
        // s.push(b);
        if(a==1){
            int b;
            cin>>b;
            s.push_back(b);
        } else if(a==2){

            if(!s.empty()){
                s.pop_back();
            }

        } else if(a==3){
            if(!s.empty()){
                cout<<s.back()<<'\n';
            } else{
                cout<<"Empty!\n";
            }
        }
      
    }
}