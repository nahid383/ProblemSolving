#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool flag = true;
        bool found = false;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        // sort(a.begin(),a.end());
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        // sort(b.begin(),b.end());
        int sum=-1;
        for(int i=0; i<n; i++){
            if(b[i]!=-1){
                sum = a[i]+b[i];
                if(sum>2*k){
            flag = false;
        }
        found = true;
                break;
            }
        }
        
        
        if(!found){
            int maxa = a[0], mina=a[0];
            for(int i=1; i<n; i++){
                maxa = max(a[i],maxa);
                mina = min(a[i],mina);
            }
            int way = (mina + k+1-maxa);
            if(way<0){
                way = 0;
            }
            cout<<way<<endl;
            continue;
        }
        for(int i=0; i<n; i++){
            if(b[i]!=-1){
                int sum2 = a[i]+b[i];
            
                if(sum!=sum2 || sum2>2*k){
                    flag = false;
                }
           
            }
        }

        if(!flag){
            cout<<"0"<<endl;
            continue;
        }
        for(int i=0; i<n; i++){
            if(b[i]==-1){
                int miss = sum -a[i];
                if(miss<0||miss>k){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
}