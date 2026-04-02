# Problem: Permutations
# Difficulty: Medium
# Language: Python
# Topic: Recursion, Backtracking, Array

"""
Description:
Given an array of distinct integers nums,
return all possible permutations.

A permutation is a rearrangement of elements.

Example 1:
Input: nums = [1,2,3]
Output:
[
 [1,2,3],
 [1,3,2],
 [2,1,3],
 [2,3,1],
 [3,1,2],
 [3,2,1]
]

Example 2:
Input: nums = [0,1]
Output: [[0,1],[1,0]]

Approach (Easy Swap Method):
1. Fix one index
2. Swap it with all remaining elements
3. Call recursion
4. When index reaches end, store permutation
5. Swap back (backtrack)

Time Complexity: O(n!)
Space Complexity: O(n)
"""

class Solution:
    def permute(self, nums):

        result = []

        def solve(index):

            # base case
            if index == len(nums):
                result.append(nums[:])
                return

            for i in range(index, len(nums)):

                # swap
                nums[index], nums[i] = nums[i], nums[index]

                # recursion
                solve(index + 1)

                # swap back
                nums[index], nums[i] = nums[i], nums[index]

        solve(0)
        return result


# Example run
nums = [1, 2, 3]
obj = Solution()
print(obj.permute(nums))
