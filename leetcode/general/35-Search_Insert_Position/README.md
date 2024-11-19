# [35.Search Insert Position](https://leetcode.com/problems/search-insert-position)

## Description

"*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.*"

## Path to solution

This is a binary search in disguise.

1. Define two iterators, one at the beginning and one at the end of the input
2. If the two iterators are the same, return one of them
3. Select a pivot equal to the element at the middle of the two iterators
4. If the pivot is the result return
5. Else if the pivot is bigger than the result, make the bigger iterator correspond to the pivot
6. Else if the pivot is smaller, make the smaller iterator correspond to the pivot
7. Go back to step 3

### Time Complexity

Every loop the number of possibilities is halved, so it's clear that the time complexity is O(logn), as the problem stated.
I don't think there is a better solution.
