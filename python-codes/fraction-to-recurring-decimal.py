# Problem: Fraction to Recurring Decimal (Easy Version)
# Difficulty: Medium
# Language: Python
# Topic: Math, Strings
"""
Description:
Convert a fraction given by numerator and denominator into its decimal representation.
If the fractional part repeats, enclose the repeating part in parentheses.

Constraints:
- Handles negative numbers
- Handles finite and repeating decimals
- Simpler approach using lists instead of dictionaries

Example:
1/2 => "0.5"
2/1 => "2"
4/333 => "0.(012)"
"""

def fractionToDecimal(numerator: int, denominator: int) -> str:
    if numerator == 0:
        return "0"

    result = ""
    
    # Handle negative sign
    if (numerator < 0) ^ (denominator < 0):
        result += "-"

    numerator = abs(numerator)
    denominator = abs(denominator)

    # Integer part
    result += str(numerator // denominator)
    remainder = numerator % denominator
    if remainder == 0:
        return result

    result += "."  # Add decimal point

    remainders = []  # List to track past remainders
    digits = []      # List to store decimal digits

    while remainder != 0:
        if remainder in remainders:
            # Repeating remainder found
            index = remainders.index(remainder)
            digits.insert(index, "(")
            digits.append(")")
            break
        remainders.append(remainder)
        remainder *= 10
        digit = remainder // denominator
        digits.append(str(digit))
        remainder %= denominator

    result += "".join(digits)
    return result


# Example runs
if __name__ == "__main__":
    print(f"1/2 = {fractionToDecimal(1, 2)}")       # Output: "0.5"
    print(f"2/1 = {fractionToDecimal(2, 1)}")       # Output: "2"
    print(f"4/333 = {fractionToDecimal(4, 333)}")   # Output: "0.(012)"
    print(f"-50/8 = {fractionToDecimal(-50, 8)}")   # Output: "-6.25"
