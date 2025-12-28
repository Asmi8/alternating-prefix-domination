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

        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + a[i]; // wrong: no alternation
        }

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (*min_element(pref.begin() + i, pref.end()) >= pref[i - 1])
                ans++;
        }
        cout << ans << "\n";
    }
}

