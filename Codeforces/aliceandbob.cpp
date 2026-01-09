
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    const ll MINB = 0;
    const ll MAXB = 2000000000LL;
    while (t--) {
        int n; ll a;
        cin >> n >> a;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];

        vector<pair<ll,int>> ev; // (pos, delta)
        ev.reserve(2 * n);

        for (int i = 0; i < n; ++i) {
            if (v[i] == a) continue;
            ll other = 2LL * v[i] - a; // endpoint of open interval with 'a'
            ll L0 = min(a, other);
            ll R0 = max(a, other);
            // open interval (L0, R0) for real b -> integer points L0+1 .. R0-1
            ll L = L0 + 1;
            ll R = R0 - 1;
            if (L > R) continue;
            if (R < MINB || L > MAXB) continue;
            L = max(L, MINB);
            R = min(R, MAXB);
            ev.emplace_back(L, +1);
            // Use R+1 as closing event
            ev.emplace_back(R + 1, -1);
        }

        if (ev.empty()) {
            // No integer gives Bob any point (or no intervals intersect allowed range)
            cout << 0 << '\n';
            continue;
        }

        sort(ev.begin(), ev.end());
        // combine same positions
        vector<pair<ll,int>> pts;
        pts.reserve(ev.size());
        for (size_t i = 0; i < ev.size(); ) {
            ll x = ev[i].first;
            int sum = 0;
            while (i < ev.size() && ev[i].first == x) {
                sum += ev[i].second;
                ++i;
            }
            pts.emplace_back(x, sum);
        }

        ll bestCount = -1;
        ll bestPos = 0;
        ll curr = 0;
        for (size_t i = 0; i < pts.size(); ++i) {
            ll x = pts[i].first;
            curr += pts[i].second; // coverage for integers starting at x
            ll next_x = (i + 1 < pts.size() ? pts[i+1].first : (MAXB + 2)); // exclusive end
            ll segL = max(x, MINB);
            ll segR = min(next_x - 1, MAXB);
            if (segL <= segR) {
                if (curr > bestCount) {
                    bestCount = curr;
                    bestPos = segL; // pick leftmost integer in that flat segment
                }
            }
        }

        if (bestCount <= 0) cout << 0 << '\n';
        else cout << bestPos << '\n';
    }
    return 0;
}
