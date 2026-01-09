#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int l= sizeof(a)/sizeof(a[0]);
        sort(a, a+l);

        int min = 10001;

        for(int i=0; i<n-1; i++){
            if(min>(a[i+1]-a[i])){
                min=a[i+1]-a[i];
            }
        }

        cout<<min<<endl;



    }

}