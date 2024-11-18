# [12.Integer to Roman](https://leetcode.com/problems/roman-to-integer)
## Description
"*Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.*

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

*For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:*
- I can be placed before V (5) and X (10) to make 4 and 9. 
- X can be placed before L (50) and C (100) to make 40 and 90. 
- C can be placed before D (500) and M (1000) to make 400 and 900.

*Given a roman numeral, convert it to an integer.*"

## Path to solution - The bad one
My way to the solution wasn't linear, and I will show all the various ideas and solutions I came up with.  
All of them were accepted, but always look for improvement.
### First solution
1. An HashMap with the entries roman -> integer is created (string,int)
2. Iterate over the input and check the hashmap
3. If the hashmap contains the string with the previous and current element add it and subtract the previous, else only the current one
4. Return the result

This solution works but:
- Is overcomplicated
- Is not very optimized, I also need a lot of substr operations

#### Time Complexity
1. Hashmap creation -> O(1)
2. Hashmap lookup -> O(1)
3. String iteration -> O(n)
4. Substr -> O(1-2) -> O(1)
Technically speaking the complexity is O(n), because the number of operation depends only on the length of the string.

### Second solution - The good one
This is the best solution I came up with.
1. Use an hashmap roman->int (char,int)
2. Iterate over the input
2. Add the current integer to the result
3. Checks if the previous is smaller than the current
4. If it is, we subtract the previous 2 times (one to rollback the previous operation, and one to get the right number in the current one)
5. Return the current result

#### Time Complexity
As before, the time complexity remains O(n), but we avoid the substr operations and also minimize the hashmap.
