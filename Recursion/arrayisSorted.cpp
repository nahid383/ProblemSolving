#include<iostream> 
#include<vector>
using namespace std;

bool isSorted(vector<int> &a, int n){
    if(n==1){
        return true;
    }

    if(a[n-1]<a[n-2]){
        return false;
    }
    return isSorted(a, n-1);
    
}
int main(){
    vector<int> a={1,2,3,4,5,6,8,7,9};
    int n = a.size();
    if(isSorted(a, n)){
        cout<<1<<endl;
    } else{
        cout<<0<<endl;
    }
}