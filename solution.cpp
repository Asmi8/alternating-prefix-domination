#include <bits/stdc++.h>
using namespace std;

struct SegmentTree {
    // stores minimum prefix sum
    // supports range add
};

int main() {
    read n, q
    read array a

    build initial alternating prefix sums
    build segment tree over them

    for each query:
        compute delta
        apply range update to segment tree
        count good indices
        print answer
}

