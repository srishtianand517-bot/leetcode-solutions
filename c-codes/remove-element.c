/*
Problem: Remove Element
Difficulty: Easy
Language: C
Topic: Array, Two Pointers

Description:
Given an integer array nums and an integer val,
remove all occurrences of val in nums in-place.

Return the number of elements that are not equal to val (k).

The first k elements of nums should contain elements
not equal to val.

Example 1:
Input:
nums = [3,2,2,3]
val = 3

Output:
k = 2
nums = [2,2,_,_]

Approach:
1. Use two pointer technique
2. One pointer for traversing array
3. One pointer for storing valid elements
4. If nums[i] != val, place it at nums[k]
5. Increase k
6. Return k

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <stdio.h>

// Function to remove element
int removeElement(int nums[], int n, int val)
{
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main()
{
    int n, val;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter value to remove: ");
    scanf("%d", &val);

    int k = removeElement(nums, n, val);

    printf("Number of elements after removal: %d\n", k);

    printf("Updated array:\n");
    for (int i = 0; i < k; i++)
        printf("%d ", nums[i]);

    return 0;
}
