/*
Problem: Find Peak Element
Difficulty: Medium
Language: C
Topic: Array, Binary Search

Description:
A peak element is an element that is strictly greater than its neighbors.
Given an array nums, find a peak element and return its index.
If multiple peaks exist, return any one index.

Constraints:
- Imagine nums[-1] = nums[n] = -∞
- Must run in O(log n) time

Example:
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element at index 2.
*/

#include <stdio.h>

int findPeakElement(int* nums, int numsSize) {
    int left = 0, right = numsSize - 1;

    while(left < right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] < nums[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }

    return left; // or right, both point to a peak
}

int main() {
    int nums[] = {1, 2, 3, 1};
    int size = sizeof(nums)/sizeof(nums[0]);

    int peakIndex = findPeakElement(nums, size);

    printf("Peak element index: %d\n", peakIndex);
    return 0;
}
