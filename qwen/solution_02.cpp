#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    while (q--) {
        int p;
        ll x;
        cin >> p >> x;
        a[p] = x;

        ll cur = 0;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            cur += (i & 1) ? a[i] : -a[i];
            if (cur >= 0) ans++;
        }
        cout << ans << "\n";
    }
}

