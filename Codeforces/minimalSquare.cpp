

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int square1 = max(a + a, b);
        int square2 = max(a, b + b);
        int side = min(square1, square2);
        int area = side * side;
        cout << area << "\n";
    }
}