# [1.Two sums](https://leetcode.com/problems/two-sum)
## Description
"*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.  
You may assume that each input would have exactly one solution, and you may not use the same element twice.  
You can return the answer in any order.*"

## Path to solution
So, let's start easy.  
The exact moment I read the problem text I screamed "HashMap!" out of my lungs.  
The basic idea is:  
1. Start by iterating the array  
2. Check if the number corresponding to *result*-*current_number* exists in the hashmap  
3. If the number exists, then a result is found and the two indexes are returned
4. Else add the element to the HashMap  

#### Time Complexity
Now, the problem's input aren't problematic, so I think that even a very naive solution would have worked.  
However, a side note in the problem asked for a time complexity lower than n^2, so we can take a look if that request was met.
1. Iteration of the array -> O(n)  
2. Lookup in the Hashmap -> O(1)
4. Addition to the HashMap -> O(1)  

So, if the math checks out, we can see that the complexity is O(n).

