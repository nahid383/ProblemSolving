#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    long long minA = *min_element(a.begin(), a.end());
    long long minB = *min_element(b.begin(), b.end());

    long long moves = 0;
    for (int i = 0; i < n; i++) {
        long long diffA = a[i] - minA;
        long long diffB = b[i] - minB;
        moves += max(diffA, diffB);
    }

    cout << moves << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
