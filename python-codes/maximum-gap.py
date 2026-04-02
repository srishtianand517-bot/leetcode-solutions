# Problem: Maximum Gap
# Difficulty: Medium
# Language: Python
# Topic: Array, Sorting

"""
Description:
Given an integer array nums, return the maximum difference between two successive elements in its sorted form.
If the array contains less than two elements, return 0.

Constraints:
- Linear time is ideal but simple sorting is acceptable
- Use minimal extra space

Example:
Input: nums = [3,6,9,1]
Output: 3
Explanation: Sorted array = [1,3,6,9], maximum gap = max(3-1, 6-3, 9-6) = 3
"""

from typing import List

def maximumGap(nums: List[int]) -> int:
    if len(nums) < 2:
        return 0

    # Step 1: Sort the array
    nums.sort()

    # Step 2: Find maximum gap between consecutive elements
    max_gap = 0
    for i in range(1, len(nums)):
        max_gap = max(max_gap, nums[i] - nums[i-1])

    return max_gap

# Example runs
if __name__ == "__main__":
    nums1 = [3,6,9,1]
    print("Maximum gap:", maximumGap(nums1))  # Output: 3

    nums2 = [10]
    print("Maximum gap:", maximumGap(nums2))  # Output: 0

    nums3 = [1,1,1,1]
    print("Maximum gap:", maximumGap(nums3))  # Output: 0
