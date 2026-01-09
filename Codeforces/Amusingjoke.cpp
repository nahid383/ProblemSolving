#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;
int main()
{
  string s1;
  string s2;
  string s3;
  cin>>s1;
  cin>>s2;
  cin>>s3;
  string result = s1+s2;
  sort(result.begin(),result.end());
  // sort(s2.begin(),s2.end());
  sort(s3.begin(),s3.end());

  if(result==s3){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
cout<<result<<endl;
cout<<s3<<endl;

}
