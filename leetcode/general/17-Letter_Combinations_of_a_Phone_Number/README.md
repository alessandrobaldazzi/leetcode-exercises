# [17.Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number)

## Description

"*Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.*"

<img src="https://assets.leetcode.com/uploads/2022/03/15/1200px-telephone-keypad2svg.png" alt="drawing" width="200"/>

## Path to solution

When there are problems requiring association HashMaps are your best friend.
Also I used recursion, but an iterative solution should also work.

1. Define an hashmap with the associations
2. Check the edge cases
3. Define a current string combination and an iterator
4. Check if the iterator is at the last position, if it is add it to the result and return
5. Else iterate over the possible values for the current position, increment the iterator and call step 4 with each obtained possibility

### Time Complexity

1. Hashmap creation -> O(1)
2. Hashmap retrieval -> O(1)
3. Recursion over the possibilities -> O(4^n)

This would be an horrendous complexity, but the limit of digits.length <= 4 definitely limits the problem.

### Observations

I didn't found solution that would be good with a bigger digits.lenght, both in the other solutions and online, so I consider this problem solved with success.
