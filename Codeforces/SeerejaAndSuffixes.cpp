// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     int b[m];
//     int c[m];
//     for(int i=0; i<m; i++){
//         cin>>b[i];
//         int count =0;
//         for(int j=i; j<n-1; j++){
//             for(int k=j+1; k<n; k++){
//                 if(a[j]!=a[k]){
//                    count++;
//                 }
//             }
//         }
//         c[i]=count;
//     }

//     for(int i=0; i<m; i++){
//         cout<<c[i]<<endl;
//     }

 
// }
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n+1];
for(int i=1;i<=n;i++)
cin>>a[i];
int distinct_count[n+2];
unordered_set<int> seen;
for(int i=n;i>=1;i--)
{seen.insert(a[i]);
    distinct_count[i]=seen.size();}
    while(m--){int l;
        cin>>l;
        cout<<distinct_count[l]<<endl;}
        return 0;
    }