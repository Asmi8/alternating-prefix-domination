#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct SegTree {
    int n;
    vector<ll> mn, lazy;

    SegTree(int n) : n(n), mn(4 * n), lazy(4 * n) {}

    void push(int v) {
        if (lazy[v] != 0) {
            for (int u : {v * 2, v * 2 + 1}) {
                mn[u] += lazy[v];
                lazy[u] += lazy[v];
            }
            lazy[v] = 0;
        }
    }

    void pull(int v) {
        mn[v] = min(mn[v * 2], mn[v * 2 + 1]);
    }

    void build(int v, int l, int r, const vector<ll>& a) {
        if (l == r) {
            mn[v] = a[l];
            return;
        }
        int m = (l + r) / 2;
        build(v * 2, l, m, a);
        bu
