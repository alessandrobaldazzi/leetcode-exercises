# [49.Group Anagrams](https://leetcode.com/problems/group-anagrams)

## Description

"*Given an array of strings strs, group the anagrams together. You can return the answer in any order.*"

## Path to solution

This problem was not immediate to solve, and this isn't the best solution, but at least it works.

The idea was that anagrams if ordered are equal, so I can use this property to group them via an hashmap,
So this is the algorithm:

1. Declare an hashmap(string, vector(string))
2. Start a loop over the input
3. Sort the current value and use it as key to add to the hashmap
4. Repeat step 3 for each input value
5. Declare the result vector of vectors
6. Put the hashmap values into the result
7. Return

### Time Complexity

1. Sort the string -> O(nlogn)
2. Loop over the input -> O(m)
3. Loop over the hashmap values -> O(m)

The final complexity is O(m*nlogn)
If we consider only n -> O(nlogn)
If we consider only m -> O(m)

## Observations

This problem can be further optimized and, even if the solution works, could be better.
Using primes is an idea but a multiplication of 100 primes could be really big.
If the primes idea works the complexity could reduce to O(m*n).
Also, even if it is an optimization, the prime method could not be available in a competitive setting.

Another solution something like a bitmap:

- For each input construct an array[26] and use it for counting each letter
- Convert it into a string and use that as key of the hashmap

Technically the complexity should be O(n*m), so should be better
