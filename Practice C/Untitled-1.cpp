#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        int odd = 0, even = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if (odd > 0 && even > 0) {
            yes;  // we can partition into two subsequences with odd sums
        } else {
            no;   // all even or all odd → can't make both sums odd
        }
    }

    return 0;
}
