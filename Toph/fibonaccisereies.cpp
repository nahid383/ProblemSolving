#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1 || n==2)
    {
        cout<<1<<endl;
        return 0;
    }
    int a=1, b=1, fib;
    for(int i=3; i<=n; i++)
    {
        fib=a+b;
        a=b;
        b=fib;
    }
    cout<<fib<<endl;
   return 0;

}