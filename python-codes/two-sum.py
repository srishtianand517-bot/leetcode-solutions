# LeetCode Problem: Two Sum
# Difficulty: Easy
# Topic: Array, HashMap
# Language: Python
# Link: https://leetcode.com/problems/two-sum/

"""
Problem:
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.

Conditions:
- Each input has exactly one solution
- Same element cannot be used twice
- Return indices in any order

Example:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]

Explanation:
nums[0] + nums[1] = 2 + 7 = 9
"""

class Solution:
    def twoSum(self, nums, target):
        hashmap = {}

        for i in range(len(nums)):
            complement = target - nums[i]

            if complement in hashmap:
                return [hashmap[complement], i]

            hashmap[nums[i]] = i


# Example Run
nums = [2,7,11,15]
target = 9

obj = Solution()
print(obj.twoSum(nums, target))
