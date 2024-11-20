# [42.Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water)

## Description

"*Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.*"

## Path to solution

This problem is one of the first HARD problems I've done on LeetCode, so it gave me quite of an headache.
My first solution wasn't bad but not the best, and I had to document myself to understand the best solution and implement it.
Still the intuition is the same so I'm happy with my achievement, I will explain both.

### First solution

The breakthrough was understanding that for each position I would need to know the highest value in both directions.
So this is the algorithm:

1. Declare two arrays with the same length as the input, called backMax and frontMax.
2. For each value in the input put the highest value to the right and to the left of it in the corresponding index of the 2 vectors.
These now represent the max to the right and to the left for each index.
3. End the iteration.
4. Start a new iteration over the input
5. Calculate the minimum value between the current values in the two max arrays.
6. Subtract the current value to the one of step 5 to obtain the trapped water at the index
7. Sum it to the total sum
8. Return the result at the end of the iteration

#### Time Complexity

1. First iteration -> O(n)
2. Second iteration -> O(n)

The complexity is O(n)

### Second solution

We can optimize the previous algorithm, reducing it to one loop and avoiding the two arrays.
So this is the algorithm:

1. Declare two iterators and two variables to hold the maximum at the left and at the right
2. Start a loop and end it when the 2 iterators coincide
These now represent the max to the right and to the left for each index.
3. If the value in the left iterator is smaller than the one to the right, check if the left value is bigger or equal to the max ever found.
4. If it is set that as the new max.
5. Else calculate the trapped water by subtracting the current to the max
6. Increment the left operator
7. If the case at point 3 isn't true, do the same passages with the right in a specular way

#### Time Complexity

- First iteration -> O(n)

The complexity is O(n)
