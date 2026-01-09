#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       int t;
       cin>>t;
       while(t--){
            int n,k;
            cin>>n>>k;
            vector<int> a(n);
            unordered_map<int, int> freq;
            for(int i=0; i<n; i++){
                cin>>a[i];
                freq[a[i]]++;
            }
            

        

            vector<int> valid;

            for(auto &p : freq){
                if(p.second>=k){
                    valid.push_back(p.first);
                }
            }

            if(valid.empty()){
                cout<<-1<<"\n";
                continue;
            }
            sort(valid.begin(), valid.end());

            int bL = valid[0], bR = valid[0];
            int cL = valid[0], cR = valid[0];

            for(int i=0; i<valid.size(); i++){
                if(valid[i] == valid[i-1]+1){
                    cR = valid[i];
                    if(cR-cL>bR-bL){
                        bR=cR;
                        bL=cL;
                    }
                } else{
                    cL=cR=valid[i];
                }
            }

            cout<<bL<<" "<<bR<<"\n";
            freq.clear();
            valid.clear();
       }
}