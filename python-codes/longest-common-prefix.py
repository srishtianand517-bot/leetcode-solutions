# Problem: Longest Common Prefix
# Difficulty: Easy
# Topic: Strings
# Language: Python

"""
Description:
Write a function to find the longest common prefix string
amongst an array of strings.

If there is no common prefix, return an empty string.

Example 1:
Input: ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: ["dog","racecar","car"]
Output: ""

Approach:
1. Take first string as prefix
2. Compare it with other strings
3. Reduce prefix until match found
4. If prefix becomes empty → return ""

Time Complexity: O(n * m)
n = number of strings
m = length of smallest string

Space Complexity: O(1)
"""

class Solution:
    def longestCommonPrefix(self, strs):
        
        if not strs:
            return ""

        prefix = strs[0]

        for i in range(1, len(strs)):
            while strs[i].find(prefix) != 0:
                prefix = prefix[:-1]

                if prefix == "":
                    return ""

        return prefix


# Example Run
strs = ["flower", "flow", "flight"]

obj = Solution()
print("Longest Common Prefix:", obj.longestCommonPrefix(strs))
