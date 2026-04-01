# Problem: Search Insert Position
# Difficulty: Easy
# Topic: Binary Search
# Language: Python

"""
Description:
Given a sorted array of distinct integers and a target value,
return the index if the target is found.
If not found, return the index where it should be inserted.

Example 1:
Input: [1,3,5,6], target = 5
Output: 2

Example 2:
Input: [1,3,5,6], target = 2
Output: 1

Example 3:
Input: [1,3,5,6], target = 7
Output: 4

Approach:
1. Use binary search
2. If target found → return index
3. If target not found → return low pointer
4. low represents insert position

Time Complexity: O(log n)
Space Complexity: O(1)
"""

class Solution:
    def searchInsert(self, nums, target):

        low = 0
        high = len(nums) - 1

        while low <= high:

            mid = (low + high) // 2

            if nums[mid] == target:
                return mid

            elif nums[mid] < target:
                low = mid + 1

            else:
                high = mid - 1

        return low


# Example Run
nums = [1, 3, 5, 6]
target = 2

obj = Solution()
print("Insert Position:", obj.searchInsert(nums, target))
