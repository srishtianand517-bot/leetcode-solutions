# Problem: Greatest Common Divisor of Strings
# Difficulty: Easy
# Language: Python
# Topic: Strings, GCD, Math

"""
Description:
For two strings str1 and str2, we say t divides s if
s = t + t + t + ... (t repeated multiple times)

Return the largest string that divides both str1 and str2.

Example 1:
str1 = "ABCABC"
str2 = "ABC"
Output: "ABC"

Example 2:
str1 = "ABABAB"
str2 = "ABAB"
Output: "AB"

Example 3:
str1 = "LEET"
str2 = "CODE"
Output: ""
"""

# function to find gcd of two numbers
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def gcdOfStrings(str1, str2):
    
    # check if both strings follow same pattern
    if str1 + str2 != str2 + str1:
        return ""
    
    # gcd of lengths
    length = gcd(len(str1), len(str2))
    
    return str1[:length]


# Example usage
if __name__ == "__main__":
    
    str1 = "ABCABC"
    str2 = "ABC"
    
    result = gcdOfStrings(str1, str2)
    
    print("Output:", result)
