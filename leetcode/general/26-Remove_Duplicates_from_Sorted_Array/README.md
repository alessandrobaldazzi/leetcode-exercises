# [26.Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array)

## Description

"*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:*

- *Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.*
- *Return k.*"

## Path to solution

One of the first things we could come up with would be an Hashmap, but in this situation, since the input is ordered, we don't actually need it.

Also the solution need to be in-place, so any more structure would be unnecessary.

Here's the solution:

1. Instantiate 2 iterators at the beginning of the input
2. One iterator will be called curr, the other toCopy
3. If the value of the two iterators is the same, increment toCopy
4. Else increment curr, copy the value from toCopy to curr, increment toCopy
5. Return curr + 1 as the length of the set

### Time Complexity

- Iteration over the input -> O(n)

The time complexity is O(n)
