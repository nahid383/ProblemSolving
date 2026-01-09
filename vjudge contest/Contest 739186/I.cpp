#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
        long long n,m,k;
        cin>>n>>m>>k;
        long long r;

        long long pown = powl(2,n);
        long long powm = powl(2,m);

        long long sum = pown+powm;

        r = powl(sum,k);

        // cout<<r<<endl;
        long long count = 0;
        string counti = "";
        while(r){
            if(r%2!=0){
                counti += '1';
            } else{
                counti +='0';
            }

            r=r/2;
        }
        
        long long len = counti.length();

        for(long long i=0; i<len; i++){
            if(counti[i]=='1'){
                count++;
            }
        }

        cout<<count<<endl;
}