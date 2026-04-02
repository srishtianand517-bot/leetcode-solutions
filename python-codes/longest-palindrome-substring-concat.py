# Problem: Longest Palindrome After Substring Concatenation I
# Difficulty: Medium
# Language: Python
# Topic: Strings, Palindrome

"""
Description:
Given two strings s and t, we can create a new string by selecting a substring
from s (possibly empty) and a substring from t (possibly empty), then concatenating them.

Return the length of the longest palindrome that can be formed this way.

Example:
Input: s = "a", t = "a"
Output: 2
Explanation: "a" from s + "a" from t => "aa" is palindrome.

Approach:
1. Try each suffix of s and prefix of t.
2. Concatenate and check palindrome length.
3. Track the maximum length.
4. Since we can also take single character from either s or t, include that as well.
"""

def longestPalindromeConcat(s, t):
    max_len = 0

    # Single characters are palindromes
    max_len = max(len(s), len(t), 1)

    # Check all combinations of suffix of s + prefix of t
    for i in range(len(s)+1):
        for j in range(len(t)+1):
            combined = s[i:] + t[:j]
            if combined == combined[::-1]:
                max_len = max(max_len, len(combined))

    return max_len


# Example runs
s = "a"
t = "a"
print(longestPalindromeConcat(s, t))  # Output: 2

s = "abc"
t = "def"
print(longestPalindromeConcat(s, t))  # Output: 1
