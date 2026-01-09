#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=2;
    int sum=1;
    while(count<=n)
    {
        sum=sum+count;
        count++;
    }
    cout<<sum<<endl;
    return 0;
}
