#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        // if(n-k<=2){
        //     cout<<"YES"<<endl;
        // }
        // else{
            vector<int> letter(26);
            for(int i=0; i<n; i++){
                letter[a[i]-'a']++;
            }
            bool palindrome = true;
            int even = 0;
            int odd = 0;
            for(int i=0;i<26; i++){
                if(letter[i]%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
            if(k<odd-1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

    }
