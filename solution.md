# Solution Explanation

## Observation
Let S(i) denote the alternating prefix sum of the first i elements. An index i is good if for all j ≥ i, the value S(j) − S(i − 1) is non-negative.

This condition is equivalent to requiring that the minimum value of S(j) over the
suffix [i, n] is at least S(i − 1). Therefore, each index can be checked by comparing
a suffix minimum of prefix sums with a previous prefix value.

## Reformulation
Instead of working directly with the array, we maintain the alternating prefix sum
array S. When an element a[p] is updated, all prefix sums S(k) for k ≥ p change by a fixed value depending on the parity of p.

Thus, updates become range additions on the prefix sum array. The condition for an
index being good depends on comparing S(i − 1) with the minimum value of S on the
suffix [i, n], which can be handled using range minimum queries.

## Algorithm
We build the alternating prefix sum array S and store it in a segment tree that
supports range addition and range minimum queries. Initially, the tree is built from the prefix sums of the given array.

For each update query at position p, we compute the change in the alternating prefix sum and apply a range addition to the segment [p, n] in the segment tree.

To compute the answer after an update, we iterate over all indices i from 1 to n and check whether the minimum value of S on the suffix [i, n] is at least S(i − 1). The number of indices satisfying this condition is printed as the result.

## Correctness Proof
We prove that the algorithm counts exactly all good indices.

From the observation, an index i is good if and only if the minimum value of the
alternating prefix sum S(j) over all j ≥ i is at least S(i − 1). The segment tree
always stores the correct values of S because each update applies the same change to all affected prefix sums.

For each index i, the algorithm checks precisely this condition using a range minimum query, so an index is counted if and only if it satisfies the definition of being good. Therefore, the algorithm produces the correct answer after every update.

## Complexity Analysis
Building the initial alternating prefix sum array and segment tree takes O(n) time.
Each update query performs a range update on the segment tree in O(log n) time and
checks all indices in O(n) time.

Thus, the total time complexity is O((n + q) log n + nq) in the worst case, which is acceptable for the given constraints. The space complexity is O(n) for storing the segment tree and auxiliary arrays.

