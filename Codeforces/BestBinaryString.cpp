#include <bits/stdc++.h>
using namespace std;

#define yes cout << "yes\n"
#define no cout << "no\n"
#define mone cout << "0"
#define ans cout << result << "\n"
#define countt cout << count << "\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for (long long i = 0; i < n; i++)
#define forntoi for (long long i = n - 1; i >= 0; i--)
#define en "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        int n = -1;
        for (int i = 0; i < l; i++)
        {
            if (s[i] != '?')
            {

                n = i;
                break;
            }
        }
        if (n == -1)
        {
            for (int i = 0; i < l; i++)
            {
                mone;
            }
            en;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            s[i] = s[n];
        }

        for (int i = n; i < l; i++)
        {
            if (s[i] == '?')
            {
                s[i] = s[i - 1];
            }
        }
        cout << s << en;
    }
}
