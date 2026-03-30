# Two Sum

## Problem

Given an array of integers nums and a target, return indices of two numbers such that they add up to target.

## Example

Input:
nums = [2,7,11,15]
target = 9

Output:
[0,1]

## Approach

We use a dictionary to store numbers and indices.

For each element:
- find complement
- check if complement exists
- return indices

## Complexity

Time Complexity: O(n)  
Space Complexity: O(n)
