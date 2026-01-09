#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end());
        int min = INT8_MAX;
        int count = 0;
        if(a[n-1]%2==0){
            for(int i=0; i<n-1; i++){
                if(a[i]%2==0){
                    break;
                }
                else{
                    count++;
                }
            }
            if(count<min){
                min=count;
            }
        }
        count = 0;
         if(a[n-1]%2!=0){
            for(int i=0; i<n-1; i++){
                if(a[i]%2!=0){
                    break;
                }
                else{
                    count++;
                }
            }
             if(count<min){
                min=count;
            }
        }
        count = 0;

         if(a[0]%2!=0){
            for(int i=n-1; i>0; i--){
                if(a[i]%2!=0){
                    break;
                }
                else{
                    count++;
                }
            }
             if(count<min){
                min=count;
            }
        }
        count = 0;
         if(a[0]%2==0){
            for(int i=n-1; i>0; i--){
                if(a[i]%2==0){
                    break;
                }
                else{
                    count++;
                }
            }
            if(count<min){
                min=count;
            }
        }
        cout<<min<<endl;
    }
}