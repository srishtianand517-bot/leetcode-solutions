/*
Problem: Two Sum II - Input Array Is Sorted
Difficulty: Medium
Language: C
Topic: Arrays, Two Pointers

Description:
Given a 1-indexed sorted array of integers 'numbers' and a target,
find two numbers such that they add up to the target. Return their indices
(index1, index2) as a 1-indexed array.

Constraints:
- Only one solution exists
- Do not use extra space (constant space)
- 1 <= index1 < index2 <= numbers.length

Example:
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: 2 + 7 = 9
*/

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0, right = numbersSize - 1;
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    while (left < right) {
        int sum = numbers[left] + numbers[right];
        if (sum == target) {
            result[0] = left + 1;  // 1-indexed
            result[1] = right + 1; // 1-indexed
            return result;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return NULL; // Not needed as per constraints (exactly one solution)
}

// Example usage
int main() {
    int numbers[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* indices = twoSum(numbers, 4, target, &returnSize);

    if (indices != NULL) {
        printf("Output: [%d,%d]\n", indices[0], indices[1]);
        free(indices);
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
