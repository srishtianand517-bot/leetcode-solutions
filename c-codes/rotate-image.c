/*
Problem: Rotate Image
Difficulty: Medium
Language: C
Topic: Array, Matrix

Description:
Given an n x n 2D matrix, rotate the image by 90 degrees clockwise.
You must rotate the matrix in-place without using another matrix.

Example:

Input:
1 2 3
4 5 6
7 8 9

Output:
7 4 1
8 5 2
9 6 3

Approach:
1. Transpose the matrix
2. Reverse each row
3. Matrix rotates 90 degree clockwise

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <stdio.h>

void rotate(int matrix[100][100], int n)
{
    int i, j, temp;

    // Step 1: Transpose
    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for(i = 0; i < n; i++)
    {
        int start = 0;
        int end = n - 1;

        while(start < end)
        {
            temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;

            start++;
            end--;
        }
    }
}

int main()
{
    int n, i, j;
    int matrix[100][100];

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    rotate(matrix, n);

    printf("\nRotated Matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
