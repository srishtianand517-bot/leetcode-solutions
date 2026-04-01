/*
LeetCode Problem: Count Complete Subarrays in an Array
Difficulty: Medium
Topic: Array, Sliding Window

Problem:
Given an array nums consisting of positive integers,
return the number of complete subarrays.

Example:
Input: [1,3,1,2,2]
Output: 4

Approach:
1. Count total distinct elements
2. Use sliding window
3. When all distinct elements present
4. Count subarrays

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <stdio.h>

int countCompleteSubarrays(int nums[], int n)
{
    int freq[1001] = {0};
    int totalDistinct = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq[nums[i]] == 0)
            totalDistinct++;
        freq[nums[i]]++;
    }

    for (int i = 0; i <= 1000; i++)
        freq[i] = 0;

    int left = 0;
    int currentDistinct = 0;
    int count = 0;

    for (int right = 0; right < n; right++)
    {
        if (freq[nums[right]] == 0)
            currentDistinct++;

        freq[nums[right]]++;

        while (currentDistinct == totalDistinct)
        {
            count += (n - right);

            freq[nums[left]]--;

            if (freq[nums[left]] == 0)
                currentDistinct--;

            left++;
        }
    }

    return count;
}

int main()
{
    int nums[] = {1,3,1,2,2};
    int n = sizeof(nums)/sizeof(nums[0]);

    printf("Complete Subarrays: %d",
           countCompleteSubarrays(nums, n));

    return 0;
}
