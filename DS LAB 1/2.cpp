#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &a, int st, int mid, int end){
    vector<int> temp;

    int i = st, j = mid+1;

    while(i<=mid && j<=end){
        if(a[i]<=a[j]){
            temp.push_back(a[i]);
            i++;
        } else{
            temp.push_back(a[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(a[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(a[j]);
        j++;
        
    }

    for(int k=0; k<temp.size(); k++){
        a[k+st]=temp[k];
    }
}
void mergeSort(vector<int> &a, int st,int end){
    if(st<end){
        int mid = st + (end-st)/2;
        mergeSort(a, st, mid);
        mergeSort(a, mid+1, end);

        merge(a, st, mid, end);
    }
}

void solve(vector<int> &a, int n){
    mergeSort(a, 0, n-1);
}
int main(){
    
    while(1){
        int n;
        cin>>n;
        if(n==0){
            break;
        }

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        solve(a,n);

        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }

        cout<<endl;
    }
}
