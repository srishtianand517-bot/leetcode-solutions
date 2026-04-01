# Problem: Find First Occurrence in a String
# Difficulty: Easy
# Topic: Strings
# Language: Python

"""
Description:
Given two strings needle and haystack,
return the index of the first occurrence of needle in haystack.
Return -1 if needle is not part of haystack.

Example 1:
Input:
haystack = "sadbutsad"
needle = "sad"

Output:
0

Example 2:
Input:
haystack = "leetcode"
needle = "leeto"

Output:
-1

Approach:
1. Loop through haystack
2. Check substring of length needle
3. If match found → return index
4. If not found → return -1

Time Complexity: O(n*m)
Space Complexity: O(1)
"""

class Solution:
    def strStr(self, haystack, needle):
        
        n = len(haystack)
        m = len(needle)

        for i in range(n - m + 1):

            if haystack[i:i+m] == needle:
                return i

        return -1


# Example Run
haystack = "sadbutsad"
needle = "sad"

obj = Solution()
print("Index:", obj.strStr(haystack, needle))
