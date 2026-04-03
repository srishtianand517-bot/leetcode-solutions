# Problem: Occurrences After Bigram
# Difficulty: Easy
# Language: Python
# Topic: Strings, Array, Sliding Window

"""
Description:
Given a string text and two words first and second,
we need to find all words that appear immediately
after the sequence "first second".

Pattern:
first second third

Whenever this pattern appears,
store the third word in the result list.



Example 1:
Input:
text = "alice is a good girl she is a good student"
first = "a"
second = "good"

Output:
["girl", "student"]


Example 2:
Input:
text = "we will we will rock you"
first = "we"
second = "will"

Output:
["we", "rock"]
"""

def findOcurrences(text, first, second):
    
    # Step 1: split text into words
    words = text.split()
    
    # Step 2: result list
    result = []
    
    # Step 3: check pattern
    for i in range(len(words) - 2):
        
        if words[i] == first and words[i+1] == second:
            result.append(words[i+2])
    
    return result


# Example usage
if __name__ == "__main__":
    
    text = "alice is a good girl she is a good student"
    first = "a"
    second = "good"
    
    result = findOcurrences(text, first, second)
    
    print("Output:", result)
