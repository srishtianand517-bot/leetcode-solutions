# Problem: Maximum Length of Pair Chain
# Difficulty: Medium
# Language: Python
# Topic: Greedy, Sorting

"""
Description:

You are given an array of pairs where:
pairs[i] = [lefti, righti] and lefti < righti

A pair p2 = [c, d] follows p1 = [a, b] if: b < c

This means the second pair must start after the first pair ends.
Return the maximum length of chain that can be formed.
You do not need to use all pairs.


Example:

Input:
pairs = [[1,2],[2,3],[3,4]]

Output:
2

Explanation:

[1,2] -> [3,4]



Approach (Greedy):

1. Sort pairs based on ending value.
2. Pick the first pair.
3. Store last ending.
4. If next pair start > last ending:
        include in chain
5. Continue till end.



Time Complexity:
O(n log n)
Sorting dominates.

Space Complexity:
O(1)


"""


def findLongestChain(pairs):
    
    # sort pairs by end
    pairs.sort(key=lambda x: x[1])
    
    count = 1
    last_end = pairs[0][1]
    
    for i in range(1, len(pairs)):
        
        if pairs[i][0] > last_end:
            count += 1
            last_end = pairs[i][1]
    
    return count


# Example usage
if __name__ == "__main__":
    
    pairs = [[1,2],[2,3],[3,4]]
    
    result = findLongestChain(pairs)
    
    print("Output:", result)
