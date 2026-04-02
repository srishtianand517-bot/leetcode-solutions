/*
Problem: Compare Version Numbers
Difficulty: Medium
Language: C
Topic: String, Parsing, Version Comparison

Description:
Given two version strings, version1 and version2, compare them.
Each version string consists of revisions separated by dots '.'. 
Compare revision values from left to right. Missing revisions are treated as 0.
Return:
-1 if version1 < version2
1  if version1 > version2
0  if they are equal

Example:
version1 = "1.2", version2 = "1.10" => Output: -1
version1 = "1.01", version2 = "1.001" => Output: 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compare version numbers
int compareVersion(char *version1, char *version2) {
    int i = 0, j = 0;
    int n1 = strlen(version1);
    int n2 = strlen(version2);

    while (i < n1 || j < n2) {
        int num1 = 0;
        int num2 = 0;

        // Parse number from version1
        while (i < n1 && version1[i] != '.') {
            num1 = num1 * 10 + (version1[i] - '0');
            i++;
        }

        // Parse number from version2
        while (j < n2 && version2[j] != '.') {
            num2 = num2 * 10 + (version2[j] - '0');
            j++;
        }

        // Compare the two numbers
        if (num1 < num2) return -1;
        if (num1 > num2) return 1;

        // Skip the dot
        if (i < n1 && version1[i] == '.') i++;
        if (j < n2 && version2[j] == '.') j++;
    }

    return 0; // Versions are equal
}

// Example runs
int main() {
    char v1[] = "1.2";
    char v2[] = "1.10";
    printf("Compare '%s' vs '%s' => %d\n", v1, v2, compareVersion(v1, v2)); // Output: -1

    char v3[] = "1.01";
    char v4[] = "1.001";
    printf("Compare '%s' vs '%s' => %d\n", v3, v4, compareVersion(v3, v4)); // Output: 0

    char v5[] = "2.0";
    char v6[] = "1.9.9";
    printf("Compare '%s' vs '%s' => %d\n", v5, v6, compareVersion(v5, v6)); // Output: 1

    return 0;
}
