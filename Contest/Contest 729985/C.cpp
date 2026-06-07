#include<iostream>
#include<vector>
#include<algorithm>

#define ans  result<<endl

using namespace std;

int summ(vector<int> &v, int n){
    if(n==0)
    return 0;
    return summ(v, n-1) + v[n-1];

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    int i=1;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int result = summ(a, n);
        cout<<"Case "<<i<<": "<<ans;
        i++;
    }
       
}
