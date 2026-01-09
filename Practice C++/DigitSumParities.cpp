#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll digitSum(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll initialParity = digitSum(n) % 2;
        ll x = n + 1;

        while (digitSum(x) % 2 == initialParity) {
            x++;
        }

        cout << x << "\n";
    }

    return 0;
}
