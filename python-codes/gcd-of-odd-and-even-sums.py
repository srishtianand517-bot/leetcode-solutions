# Problem: GCD of Odd and Even Sums
# Difficulty: Easy
# Language: Python
# Topic: Math, GCD, Basic Formula

"""
Description:
You are given an integer n.

Compute two values:
sumOdd  -> sum of first n positive odd numbers
sumEven -> sum of first n positive even numbers

Return the GCD (Greatest Common Divisor) of sumOdd and sumEven.

Important:
- Do not use math.gcd()
- Use manual GCD (Euclidean Algorithm)

Example 1:
Input: n = 4

Odd numbers: 1 + 3 + 5 + 7 = 16
Even numbers: 2 + 4 + 6 + 8 = 20

GCD(16, 20) = 4

Output: 4

Example 2:
Input: n = 3

Odd sum = 9
Even sum = 12

GCD(9, 12) = 3

Output: 3
"""

# Function to calculate GCD using Euclidean Algorithm
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a


# Main function
def gcdOddEven(n):
    # Sum of first n odd numbers = n^2
    sumOdd = n * n

    # Sum of first n even numbers = n*(n+1)
    sumEven = n * (n + 1)

    # Return GCD
    return gcd(sumOdd, sumEven)


# Example usage
if __name__ == "__main__":
    
    n = 4
    
    result = gcdOddEven(n)
    
    print("Input:", n)
    print("Output:", result)
