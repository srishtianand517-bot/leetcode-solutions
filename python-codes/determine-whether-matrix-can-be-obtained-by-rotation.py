# Problem: Determine Whether Matrix Can Be Obtained By Rotation
# Difficulty: Easy
# Language: Python
# Topic: Matrix, Simulation

"""
Description:
Given two n x n binary matrices mat and target,
check whether mat can become equal to target
by rotating mat by 90 degrees (0, 90, 180, 270).

Return True if possible, otherwise False.

Example:
mat = [[0,1],[1,0]]
target = [[1,0],[0,1]]

Output: True
"""

def rotate90(matrix):
    n = len(matrix)
    
    # create new rotated matrix
    rotated = [[0]*n for _ in range(n)]
    
    for i in range(n):
        for j in range(n):
            rotated[j][n-1-i] = matrix[i][j]
    
    return rotated


def findRotation(mat, target):
    
    for _ in range(4):
        if mat == target:
            return True
        mat = rotate90(mat)
    
    return False


# Example usage
if __name__ == "__main__":
    
    mat = [[0,1],[1,0]]
    target = [[1,0],[0,1]]
    
    result = findRotation(mat, target)
    
    print("Output:", result)
