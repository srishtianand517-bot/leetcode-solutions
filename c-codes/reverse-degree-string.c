/*
Problem: Reverse Degree of a String
Difficulty: Easy
Language: C
Topic: Strings, Math

Description:
Given a string s, calculate its reverse degree.

Reverse degree calculation:
1. For each character, find its position in the reversed alphabet:
   'a' = 26, 'b' = 25, ..., 'z' = 1
2. Multiply it with its position in the string (1-indexed)
3. Sum these products for all characters
4. Return the sum

Example:
Input: "abc"
Output: 148
Explanation:
'a' -> 26*1 = 26
'b' -> 25*2 = 50
'c' -> 24*3 = 72
Sum = 148

Approach:
- Loop through the string
- Compute reversed alphabet value: 26 - (s[i]-'a')
- Multiply with position (i+1)
- Add to sum
*/

#include <stdio.h>
#include <string.h>

int reverseDegree(char s[]) {
    int n = strlen(s);
    int sum = 0;

    for(int i = 0; i < n; i++) {
        int rev_value = 26 - (s[i] - 'a'); // reversed alphabet value
        sum += rev_value * (i + 1);        // multiply by position
    }

    return sum;
}

int main() {
    char s[1000];

    printf("Enter the string (lowercase letters only): ");
    scanf("%s", s);

    int result = reverseDegree(s);

    printf("Reverse Degree: %d\n", result);

    return 0;
}
