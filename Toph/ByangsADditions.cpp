#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[1000000], b[1000000];
    cin >>a;
    cin >>b;
    int length = strlen(a);
    int length2 = strlen(b);
    if(length2>length)
    length2=length;

    for(int i=0; i<length2; i++)
    {
        for(int j=0; j<length2; j++)
        {
        int sum = a[i]-'0'+b[j]-'0';
        if(sum>=10)
        {
        cout <<"Yes\n";
        return 0;
        }
        }
    }
    cout <<"No\n";
    return 0;
}