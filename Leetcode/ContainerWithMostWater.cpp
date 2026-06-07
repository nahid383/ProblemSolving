#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int maxWater = INT8_MIN;
    int base, height;
    for(int i=0; i<n-1; i++){
        int area=1;
        for(int j=i+1; j<n; j++){
            
            area = min(a[i],a[j])*(j-1);
            if(area>maxWater){
                maxWater=area;
                base = a[i];
                height = a[j];
            }
        }
    }
    cout<<maxWater<<" "<<base<<" "<<height<<endl;
}