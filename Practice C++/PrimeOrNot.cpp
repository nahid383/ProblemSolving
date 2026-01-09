#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter any number:";
    int n;
    cin>>n;
    bool isPrime = true;
    if(n==0 || n==1)
    {
        cout<<"Not Prime Number\n";
        return 0;
    }
    for(int i=2; i*i<n; i++)
    {
        if(n%i==0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout<<"Prime Number\n";

    }
    else
    {
        cout<<"Not Prime Number\n";
    }
} 