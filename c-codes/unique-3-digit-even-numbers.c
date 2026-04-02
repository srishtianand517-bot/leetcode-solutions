/*
Problem: Unique 3-Digit Even Numbers
Difficulty: Easy
Language: C
Topic: Array, Brute Force

Description:
You are given an array of digits.
Find how many unique 3-digit even numbers can be formed.

Rules:
1. Number must be 3-digit
2. Last digit must be even
3. No leading zero
4. Each digit can be used once per number
5. Count unique numbers only

Example:
Input:
digits = [1,2,3,4]

Output:
12

Approach:
1. Try all combinations of 3 digits
2. Check leading zero
3. Check last digit even
4. Make number
5. Store unique numbers
6. Count total

Time Complexity: O(n^3)
Space Complexity: O(1)
*/

#include <stdio.h>

int countEvenNumbers(int digits[], int n)
{
    int visited[1000] = {0};
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(i != j && j != k && i != k)
                {
                    if(digits[i] == 0)
                        continue;

                    if(digits[k] % 2 != 0)
                        continue;

                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];

                    if(visited[num] == 0)
                    {
                        visited[num] = 1;
                        count++;
                    }
                }
            }
        }
    }

    return count;
}

int main()
{
    int n;

    printf("Enter number of digits: ");
    scanf("%d", &n);

    int digits[n];

    printf("Enter digits:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &digits[i]);
    }

    int result = countEvenNumbers(digits, n);

    printf("Unique 3-digit even numbers count: %d", result);

    return 0;
}
