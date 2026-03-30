# LeetCode Problem 1: Two Sum
# Difficulty: Easy
# Topic: Array, HashMap
# Time Complexity: O(n)
# Space Complexity: O(n)
# Link: https://leetcode.com/problems/two-sum/

class Solution:
    def twoSum(self, nums, target):
        d = {}

        for i in range(len(nums)):
            comp = target - nums[i]

            if comp in d:
                return [d[comp], i]
            else:
                d[nums[i]] = i


# Example Run
nums = [2,7,11,15]
target = 9

obj = Solution()
print(obj.twoSum(nums, target))
