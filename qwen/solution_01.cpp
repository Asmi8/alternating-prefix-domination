#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    while (q--) {
        int p;
        ll x;
        cin >> p >> x;
        a[p] = x;

        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + ((i & 1) ? a[i] : -a[i]);
        }

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            bool ok = true;
            for (int j = i; j <= n; j++) {
                if (pref[j] - pref[i - 1] < 0) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}

