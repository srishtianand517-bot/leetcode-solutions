# Problem: Combination Sum
# Difficulty: Medium
# Language: Python
# Topic: Backtracking, Recursion

"""
Description:
Given an array of distinct integers candidates and a target,
return all unique combinations where numbers sum to target.

Each number can be used unlimited times.

Example:
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]

Approach:
1. Try each number
2. Add number to current combination
3. Reduce target
4. Continue recursion
5. If target becomes 0 → store result
6. Remove last element (backtrack)

Time Complexity: Exponential
Space Complexity: O(target)
"""

class Solution:
    def combinationSum(self, candidates, target):
        
        result = []

        def backtrack(start, path, remaining):

            if remaining == 0:
                result.append(path.copy())
                return

            if remaining < 0:
                return

            for i in range(start, len(candidates)):
                path.append(candidates[i])
                backtrack(i, path, remaining - candidates[i])
                path.pop()

        backtrack(0, [], target)
        return result
