#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0; i<n; i++){
        cin>>a[i];
    }
    long long count=0;
    vector<bool> Done(n, false);
    for(long long i=0; i<n; i++){
        for(long long j=i+1; j<n; j++){
            for(long long k=j+1; k<n; k++){
                long long x=a[i], y=a[j], z=a[k];
                if(x>y){
                    swap(x,y);
                } 
                if(y>z){
                    swap(y,z);
                } 
                if(x>z){
                    swap(x,z);
                }

                if(x*x+y*y==z*z){
                    Done[i]=true;
                    Done[j]=true;
                    Done[k]=true;
                }
            }
        }

    }
    for(long long i=0; i<n; i++){
        if(Done[i]==true){
            count++;
        }
    }
    cout<<count<<endl;
}