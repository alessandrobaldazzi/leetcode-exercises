# [27.Remove Element](https://leetcode.com/problems/remove-element)

## Description

"*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:*

- *Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.*
- *Return k.*"

## Path to solution

The problem is quite easy, and really similar to problem 26.

Here's the solution:

1. Instantiate 2 iterators at the beginning of the input
2. One iterator will be called curr, the other toChange
3. If the current value of toChange is equal to val, increment toChange
4. Else increment curr, copy the value from toChange to curr, increment toChange
5. Return curr as the length of the set

### Time Complexity

- Iteration over the input -> O(n)

The time complexity is O(n)
