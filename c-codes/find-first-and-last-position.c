/*
Problem: Find First and Last Position of Element in Sorted Array
Difficulty: Medium
Language: C
Topic: Binary Search, Array

Description:
Given a sorted array nums and a target value,
find the starting and ending position of the target.

If target not found → return [-1, -1]

Example:
Input:
nums = [5,7,7,8,8,10]
target = 8

Output:
3 4

Approach:
1. Use binary search to find first occurrence
2. Use binary search to find last occurrence
3. Return both indices

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <stdio.h>

// Find first occurrence
int findFirst(int nums[], int n, int target)
{
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            high = mid - 1;  // move left
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

// Find last occurrence
int findLast(int nums[], int n, int target)
{
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            low = mid + 1;   // move right
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    printf("Position: [%d, %d]", first, last);

    return 0;
}
