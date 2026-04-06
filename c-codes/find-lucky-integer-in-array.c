/*
Problem: Find Lucky Integer in an Array
Difficulty: Easy
Language: C
Topic: Arrays, Frequency Counting

------------------------------------------------

Description:

Given an array of integers arr, a lucky integer
is an integer whose frequency in the array is
equal to its value.

Return the largest lucky integer.
If no lucky integer exists, return -1.

------------------------------------------------

Example 1:

Input:
arr = [2,2,3,4]

Output:
2

Explanation:

2 appears 2 times → lucky
3 appears 1 time → not lucky
4 appears 1 time → not lucky

Largest lucky = 2


Example 2:

Input:
arr = [1,2,2,3,3,3]

Output:
3

Explanation:

1 appears 1 time
2 appears 2 times
3 appears 3 times

Largest lucky = 3

------------------------------------------------

Approach:

1. Create a frequency array.
2. Count occurrences of each number.
3. Traverse frequency array.
4. If frequency[i] == i:
        update max lucky
5. Return max lucky.

------------------------------------------------

Time Complexity:
O(n)
Single traversal.


Space Complexity:
O(1)
Frequency array of fixed size.

------------------------------------------------
*/

#include <stdio.h>

int findLucky(int arr[], int n) {
    
    int freq[501] = {0};   // constraints: 1 ≤ arr[i] ≤ 500
    
    // Step 1: count frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    int maxLucky = -1;
    
    // Step 2: find lucky number
    for (int i = 1; i <= 500; i++) {
        
        if (freq[i] == i) {
            maxLucky = i;
        }
    }
    
    return maxLucky;
}

int main() {
    
    int arr[] = {2,2,3,4};
    int n = 4;
    
    int result = findLucky(arr, n);
    
    printf("Output: %d\n", result);
    
    return 0;
}
