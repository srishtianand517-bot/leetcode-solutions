/*
Problem: Longest Palindromic Substring
Difficulty: Medium
Language: C
Topic: Strings, Two Pointers

Description:
Given a string s, return the longest palindromic substring in s.

Example 1:
Input: babad
Output: bab or aba

Example 2:
Input: cbbd
Output: bb

Approach:
1. Every character can be center of palindrome
2. Expand from center (left and right)
3. Check for odd length palindrome
4. Check for even length palindrome
5. Store maximum length substring

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <stdio.h>
#include <string.h>

void longestPalindrome(char s[])
{
    int n = strlen(s);
    int start = 0;
    int maxLen = 1;

    for (int i = 0; i < n; i++)
    {
        // Odd length palindrome
        int left = i;
        int right = i;

        while (left >= 0 && right < n && s[left] == s[right])
        {
            if (right - left + 1 > maxLen)
            {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;

        while (left >= 0 && right < n && s[left] == s[right])
        {
            if (right - left + 1 > maxLen)
            {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLen; i++)
        printf("%c", s[i]);
}

int main()
{
    char s[1000];

    printf("Enter string: ");
    scanf("%s", s);

    longestPalindrome(s);

    return 0;
}
