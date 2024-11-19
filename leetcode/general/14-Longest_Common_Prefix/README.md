# [14.Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix)

## Description

"*Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "" .*"

## Path to solution

The solution was really intutive and easy, with no particular reasoning.

1. Exclude edge cases
2. Order the input
3. Iterate over the length of the first string
4. Check if there are differences between the first and the last corresponding element.
5. If there aren't increase the counter, else return

### Time Complexity

1. Vector ordering -> O(n*logn)
2. Iteration over first string length -> O(m)

n = number of input strings
m = length of the first string

The complexity is O(nlogn + m)

### Observations

Another solution was to avoid sorting by double iterating over the length of the first string and confronting the same index of every string.
Time complexity -> O(n*m)

If we consider only n, the complexities are O(nlogn) and O(n)
If we consider only m, the complexities are O(m) and O(m)

So it's not too clear to me what is the better appraoch, and the fastest method really depends on the use.
