/*
Problem: Remove Duplicates from Sorted Array
Difficulty: Easy
Language: C
Topic: Array, Two Pointers

Description:
Given a sorted array nums, remove duplicates in-place
so that each unique element appears only once.

Return the number of unique elements (k).

Example:
Input: [1,1,2]
Output: 2
Array becomes: [1,2,_]

Approach:
1. Use two pointers
2. First pointer keeps track of unique elements
3. Second pointer scans array
4. If new element found, move it to next position

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <stdio.h>

int removeDuplicates(int nums[], int n)
{
    if (n == 0)
        return 0;

    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter sorted array elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int k = removeDuplicates(nums, n);

    printf("Number of unique elements: %d\n", k);

    printf("Array after removing duplicates: ");

    for (int i = 0; i < k; i++)
        printf("%d ", nums[i]);

    return 0;
}
