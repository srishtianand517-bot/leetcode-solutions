/*
Problem: Partition Array Into K-Distinct Groups
Difficulty: Medium
Language: C
Topic: Arrays, Hashing, Frequency Count

Description:
You are given an integer array nums and an integer k.

You need to check whether it is possible to divide the array into groups such that:

1. Each group contains exactly k elements
2. All elements in each group are distinct
3. Every element must be used exactly once

Return true (1) if possible, otherwise false (0)

Example 1:
Input: nums = [1,2,3,4], k = 2
Output: 1

Explanation:
Group1: [1,2]
Group2: [3,4]

Example 2:
Input: nums = [1,1,2,2], k = 2
Output: 0

Explanation:
Duplicate elements cannot be in same group
*/

#include <stdio.h>
#include <stdbool.h>

#define MAX 1001

bool canPartition(int nums[], int size, int k) {
    
    // If total elements not divisible by k
    if (size % k != 0)
        return false;

    int freq[MAX] = {0};

    // Count frequency of each element
    for (int i = 0; i < size; i++) {
        freq[nums[i]]++;
    }

    int groups = size / k;

    // Check if any number appears more than groups
    for (int i = 0; i < MAX; i++) {
        if (freq[i] > groups)
            return false;
    }

    return true;
}

int main() {
    
    int nums[] = {1,2,3,4};
    int k = 2;
    int size = sizeof(nums) / sizeof(nums[0]);

    if (canPartition(nums, size, k))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
