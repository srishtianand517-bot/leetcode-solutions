/*
Problem: Equal Sum Grid Partition I
Difficulty: Medium
Language: C
Topic: Matrix, Prefix Sum

Description:
Given an m x n grid of positive integers,
check whether we can make exactly one horizontal
or vertical cut such that:

1. Both parts are non-empty
2. Sum of both parts is equal

Return true (1) or false (0)

Example:
grid = [[1,4],
        [2,3]]

Total sum = 10

Horizontal cut:
Row1 sum = 5
Row2 sum = 5

Equal -> true
*/

#include <stdio.h>
#include <stdbool.h>

bool equalSumPartition(int grid[][100], int m, int n) {

    int total = 0;

    // calculate total sum
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            total += grid[i][j];
        }
    }

    int sum = 0;

    // check horizontal cut
    for(int i = 0; i < m - 1; i++) {
        for(int j = 0; j < n; j++) {
            sum += grid[i][j];
        }

        if(sum * 2 == total)
            return true;
    }

    sum = 0;

    // check vertical cut
    for(int j = 0; j < n - 1; j++) {
        for(int i = 0; i < m; i++) {
            sum += grid[i][j];
        }

        if(sum * 2 == total)
            return true;
    }

    return false;
}

int main() {

    int grid[100][100] = {
        {1,4},
        {2,3}
    };

    int m = 2;
    int n = 2;

    if(equalSumPartition(grid, m, n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
