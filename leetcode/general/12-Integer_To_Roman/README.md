# [12.Integer to Roman](https://leetcode.com/problems/integer-to-roman)
## Description
"*Seven different symbols represent Roman numerals with the following values:*

Symbol	Value
I	1
V	5
X	10
L	50
C	100
D	500
M	1000

*Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. Converting a decimal place value into a Roman numeral has the following rules:
If the value does not start with 4 or 9, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral.
If the value starts with 4 or 9 use the subtractive form representing one symbol subtracted from the following symbol, for example, 4 is 1 (I) less than 5 (V): IV and 9 is 1 (I) less than 10 (X): IX. Only the following subtractive forms are used: 4 (IV), 9 (IX), 40 (XL), 90 (XC), 400 (CD) and 900 (CM).
Only powers of 10 (I, X, C, M) can be appended consecutively at most 3 times to represent multiples of 10. You cannot append 5 (V), 50 (L), or 500 (D) multiple times. If you need to append a symbol 4 times use the subtractive form.
Given an integer, convert it to a Roman numeral.*"

## Path to solution
My way to the solution wasn't linear, and I will show all the various ideas and solutions I came up with.  
All of them were accepted, but always look for improvement.
### First solution - The bad solution
This is a clear example on how to overcomplicate things.  
1. An HashMap with the entries integer -> roman is created
2. Get the units below 10 by using the module and translate it using the hashmap.
Cases with no correspondance are constructed by using roman numeration rules.
3. Subtract the previous number from the input
4. Repeat steps 2 and 3 with module 100, 1000, 4000 (since the maximum number is 3999).  

I use *res* as the final result and curRes as a temporary result.
This solution works but:
- Is overcomplicated
- Can be further optimized, in both time and space

#### Time Complexity
1. Hashmap creation -> O(1)
2. Hashmap lookup -> O(1)
Technically speaking the complexity is O(1), because the number of operation is always the same, no matter the input.
But I think that in this problem the Big-O notation doesn't really help too much in undestanding the efficiency of the algorithm, since the input is quite limited.

### Second solution - The good solution
This is the best *easily undestandable* solution I came up with.
1. Use two arrays of the same size to save the known correspondances roman<->integer ordered by size
2. Create an iterator set to 0
2. Start a loop that continues until the input is 0
3. Using the iterator, check if the current integer is bigger than the output
4. If it is, we don't need its roman, so we increase the iterator
5. Else we subtract the integer from the input and add the roman to the result
6. At the end of the loop we have the correct result
This solution is quite easy to understand, it's shorter and more efficient

#### Time Complexity
As before, the time complexity remains O(1).

### Other ideas
Some other ideas came up, but they were mostly ugly
1. Saving each possibility for each module as in the first solution directly in the created hashmap
Surely works, but it's ugly and I hate it
