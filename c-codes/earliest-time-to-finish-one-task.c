/*
Problem: Earliest Time to Finish One Task
Difficulty: Easy
Language: C
Topic: Arrays, Minimum

Description:
You are given a 2D array tasks where:

tasks[i][0] = start time (si)
tasks[i][1] = time required (ti)

Each task finishes at:
finish_time = si + ti

Return the earliest finish time among all tasks.

Example:
Input: tasks = [[1,6],[2,3]]

Task1: 1 + 6 = 7
Task2: 2 + 3 = 5

Output: 5
*/

#include <stdio.h>

int earliestFinish(int tasks[][2], int n) {

    int minTime = tasks[0][0] + tasks[0][1];

    for (int i = 1; i < n; i++) {
        int finish = tasks[i][0] + tasks[i][1];

        if (finish < minTime) {
            minTime = finish;
        }
    }

    return minTime;
}

int main() {

    int tasks[][2] = {
        {1, 6},
        {2, 3}
    };

    int n = 2;

    int result = earliestFinish(tasks, n);

    printf("Earliest Finish Time: %d\n", result);

    return 0;
}
