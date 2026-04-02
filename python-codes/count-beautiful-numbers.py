# Problem: Count Beautiful Numbers
# Difficulty: Hard
# Language: Python
# Topic: Math, Brute Force

"""
Description:
A positive integer is called beautiful if the product of its digits 
is divisible by the sum of its digits.

Given l and r, return the count of beautiful numbers between l and r inclusive.

Example:
Input: l = 10, r = 20
Output: 2
Explanation: 10 and 20 are beautiful numbers.

Approach:
1. Iterate from l to r
2. For each number:
   - Calculate sum of digits
   - Calculate product of digits
   - Check if product % sum == 0
3. Count all beautiful numbers
"""

class Solution:
    def countBeautifulNumbers(self, l, r):
        count = 0

        for num in range(l, r+1):
            digits = [int(d) for d in str(num)]
            s = sum(digits)
            p = 1
            for d in digits:
                p *= d

            if s != 0 and p % s == 0:
                count += 1

        return count


# Example run
l = 10
r = 20

obj = Solution()
print(obj.countBeautifulNumbers(l, r))
