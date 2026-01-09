 #include<iostream>

#include<vector>
#include<algorithm>

using namespace std;

void solve(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    solve(n-1);
    cout<<n<<" ";
    solve(n-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    solve(n);
       
}
