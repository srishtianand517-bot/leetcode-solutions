/*
Problem: Multiply Strings
Difficulty: Medium
Language: C
Topic: String, Array, Math

Description:
Given two non-negative integers num1 and num2 represented as strings,
return their product as a string.

You must not convert the strings to integers directly.

Example:
Input:
num1 = "123"
num2 = "456"

Output:
56088

Approach:
1. Use school multiplication method
2. Multiply each digit
3. Store result in array
4. Handle carry
5. Convert array to string

Time Complexity: O(n * m)
Space Complexity: O(n + m)
*/

#include <stdio.h>
#include <string.h>

void multiply(char num1[], char num2[])
{
    int n = strlen(num1);
    int m = strlen(num2);

    int result[n + m];

    for (int i = 0; i < n + m; i++)
        result[i] = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');

            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    int i = 0;
    while (i < n + m && result[i] == 0)
        i++;

    if (i == n + m)
    {
        printf("0");
        return;
    }

    for (; i < n + m; i++)
        printf("%d", result[i]);
}

int main()
{
    char num1[1000], num2[1000];

    printf("Enter first number: ");
    scanf("%s", num1);

    printf("Enter second number: ");
    scanf("%s", num2);

    printf("Product: ");
    multiply(num1, num2);

    return 0;
}
