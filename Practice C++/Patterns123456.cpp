#include<iostream>
using namespace std;
 
int main()
{
    int row, col;
    cout<< "Enter No of Row and Column: ";
    cin>>row>>col;
    int num = 1;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
    return 0;
}