# Problem: Integer to Roman
# Difficulty: Medium
# Language: Python
# Topic: String, Greedy, Array

"""
Description:
Roman numerals are represented by seven symbols:

I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000

Roman numerals are formed by appending symbols from highest to lowest value.

Special subtractive cases:
4  -> IV
9  -> IX
40 -> XL
90 -> XC
400 -> CD
900 -> CM

Given an integer, convert it to a Roman numeral.

Example 1:
Input: num = 3
Output: III

Example 2:
Input: num = 58
Output: LVIII

Example 3:
Input: num = 1994
Output: MCMXCIV

Approach:
1. Create two lists:
   - values (integer values)
   - symbols (Roman symbols)
2. Start from the largest value
3. While num >= value:
      add symbol to result
      subtract value from num
4. Continue until num becomes 0

Time Complexity: O(1)
Space Complexity: O(1)
"""

class Solution:
    def intToRoman(self, num: int) -> str:
        
        # Integer values
        values = [
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4, 1
        ]

        # Roman symbols
        symbols = [
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        ]

        result = ""

        # Traverse values
        for i in range(len(values)):

            # Repeat while num is greater
            while num >= values[i]:
                result += symbols[i]
                num -= values[i]

        return result


# Example run (for local testing)
if __name__ == "__main__":
    num = int(input("Enter number: "))
    obj = Solution()
    print("Roman:", obj.intToRoman(num))
