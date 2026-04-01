# Program: Merge Two Dictionaries
# Topic: Dictionary, Input Handling, Loop
# Language: Python

"""
Problem:
Write a Python program to merge two dictionaries by taking input from the user.

Rules:
1. If a key exists in both dictionaries, add their values
2. If a key exists in only one dictionary, keep its value

Example:
Input:
a:10
b:20
c:30

b:5
c:15
d:25

Output:
{'a': 10, 'b': 25, 'c': 45, 'd': 25}
"""

# First dictionary input
n1 = int(input("Enter size of first dictionary: "))
dict1 = {}

for i in range(n1):
    key = input("Enter key: ")
    value = int(input("Enter value: "))
    dict1[key] = value

# Second dictionary input
n2 = int(input("\nEnter size of second dictionary: "))
dict2 = {}

for i in range(n2):
    key = input("Enter key: ")
    value = int(input("Enter value: "))
    dict2[key] = value

# Merging dictionaries
merged = {}

# Add first dictionary
for key in dict1:
    merged[key] = dict1[key]

# Merge second dictionary
for key in dict2:
    if key in merged:
        merged[key] += dict2[key]
    else:
        merged[key] = dict2[key]

# Output
print("\nMerged dictionary:", merged)
