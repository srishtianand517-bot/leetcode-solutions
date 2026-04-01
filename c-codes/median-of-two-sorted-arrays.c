/*
Problem: Median of Two Sorted Arrays (Basic Approach)
Language: C
Topic: Array, Merge, Median
Difficulty: Medium (Basic Approach)

Description:
Given two sorted arrays nums1 and nums2 of size m and n,
return the median of the two sorted arrays.

Approach:
1. Take input for both arrays
2. Merge both sorted arrays
3. Check total size
4. If even → average of two middle elements
5. If odd → middle element

Time Complexity: O(m+n)
Space Complexity: O(m+n)
*/

#include <stdio.h>

double findMedian(int nums1[], int m, int nums2[], int n)
{
    int merged[200];
    int i = 0, j = 0, k = 0;

    // Merge arrays
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    while (i < m)
        merged[k++] = nums1[i++];

    while (j < n)
        merged[k++] = nums2[j++];

    int size = m + n;

    // Find median
    if (size % 2 == 0)
    {
        return (merged[size/2] + merged[size/2 - 1]) / 2.0;
    }
    else
    {
        return merged[size/2];
    }
}

int main()
{
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];

    printf("Enter elements of first sorted array:\n");
    for (int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];

    printf("Enter elements of second sorted array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    double median = findMedian(nums1, m, nums2, n);

    printf("Median = %.2f", median);

    return 0;
}
