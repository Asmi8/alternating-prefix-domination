# Alternating Prefix Domination

## Problem Statement
You are given an array of integers of length n. Define the alternating prefix sum S(k)
as follows:

S(k) = a₁ − a₂ + a₃ − a₄ + ... ± aₖ

where the sign alternates starting with plus for the first element.

An index i (1 ≤ i ≤ n) is called good if for every j such that j ≥ i, the following
condition holds:

S(j) − S(i − 1) ≥ 0

Assume that S(0) = 0.

You are also given a sequence of update queries. Each query changes one element of
the array, and after each update you must output the number of good indices.

## Input
The first line contains two integers n and q, the length of the array and the number
of queries.

The second line contains n integers a₁, a₂, ..., aₙ.

Each of the following q lines contains two integers p and x, meaning that the value
at position p is updated to x.

## Output
After each update query, output a single integer representing the number of good
indices in the array after the update.

## Constraints
1 ≤ n, q ≤ 2 × 10⁵  
−10⁹ ≤ aᵢ, x ≤ 10⁹


