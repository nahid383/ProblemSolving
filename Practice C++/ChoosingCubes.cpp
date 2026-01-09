#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,f;
        cin>>n>>f>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int desire = a[f-1];
        int size = sizeof(a)/sizeof(a[0]);
        sort(a,a+size);
        int start = 0, end = n-1;
        while(start<end){
            swap(a[start],a[end]);
            start++;
            end--;
        }
        // for(int i=0; i<n; i++){
        //     cout<<a[i];`1`
        // }
        int flag=0;
        int count = 0;
        for(int i=k; i<n; i++){
            if(a[i]==desire){
                flag=1;

                count++;
            }
        }
        if(count>0 && a[k-1]==desire){
            cout<<"MAYBE"<<endl;
        }
        else if(flag==0){
            cout<<"YES"<<endl;
        }
        else if(flag==1){
            cout<<"NO"<<endl;
        }


    }
}