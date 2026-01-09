#include<iostream>
using namespace std;
 
int main()
{
    int row, col;
    cout<< "Enter No of Row and Column: ";
    cin>>row>>col;
    char ch = 'A';
    for(int i=1; i<=row; i++)
    {

        for(int j=1; j<=col; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
    return 0;
}