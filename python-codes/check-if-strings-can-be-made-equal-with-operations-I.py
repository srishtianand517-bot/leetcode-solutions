# Problem: Check if Strings Can be Made Equal With Operations I
# Difficulty: Easy
# Language: Python
# Topic: Strings, Sorting

"""
Description:
You are given two strings s1 and s2 of length 4.

Operation allowed:
Choose two indices i and j such that (j - i = 2)
and swap characters.

Possible swaps:
index 0 ↔ 2
index 1 ↔ 3

Return True if s1 can be made equal to s2,
otherwise return False.

Example 1:
s1 = "abcd"
s2 = "cdab"
Output: True

Example 2:
s1 = "abcd"
s2 = "dacb"
Output: False
"""

def canBeEqual(s1, s2):
    
    # Even positions (0 and 2)
    even1 = sorted([s1[0], s1[2]])
    even2 = sorted([s2[0], s2[2]])

    # Odd positions (1 and 3)
    odd1 = sorted([s1[1], s1[3]])
    odd2 = sorted([s2[1], s2[3]])

    return even1 == even2 and odd1 == odd2


# Example usage
if __name__ == "__main__":
    
    s1 = "abcd"
    s2 = "cdab"

    result = canBeEqual(s1, s2)

    print("Output:", result)
