# Problem: 3Sum
# Difficulty: Medium
# Topic: Array, Two Pointers, Sorting
# Language: Python

"""
Description:
Given an integer array nums, return all the triplets
[nums[i], nums[j], nums[k]] such that:

i != j, i != k, j != k
nums[i] + nums[j] + nums[k] == 0

The solution must not contain duplicate triplets.

Example:
Input: [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

Approach:
1. Sort the array
2. Fix first element
3. Use two pointers (left and right)
4. If sum = 0 → store triplet
5. Skip duplicates
6. Move pointers

Time Complexity: O(n^2)
Space Complexity: O(1)
"""

class Solution:
    def threeSum(self, nums):
        
        nums.sort()
        result = []

        for i in range(len(nums) - 2):

            # skip duplicates
            if i > 0 and nums[i] == nums[i-1]:
                continue

            left = i + 1
            right = len(nums) - 1

            while left < right:

                total = nums[i] + nums[left] + nums[right]

                if total == 0:
                    result.append([nums[i], nums[left], nums[right]])

                    # skip duplicates
                    while left < right and nums[left] == nums[left+1]:
                        left += 1

                    while left < right and nums[right] == nums[right-1]:
                        right -= 1

                    left += 1
                    right -= 1

                elif total < 0:
                    left += 1
                else:
                    right -= 1

        return result


# Example Run
nums = [-1,0,1,2,-1,-4]

obj = Solution()
print("Triplets:", obj.threeSum(nums))
