/*
Problem: Palindromic Substrings
Difficulty: Medium
Language: C
Topic: Strings, Two Pointers, Expand Around Center


Description:

Given a string s, return the number of palindromic substrings.
A palindrome reads the same forward and backward.
A substring is a continuous sequence of characters.



Example 1:

Input:
s = "abc"

Output:
3

Palindromes:
a
b
c



Example 2:

Input:
s = "aaa"

Output:
6

Palindromes:
a
a
a
aa
aa
aaa



Approach (Expand Around Center):

1. Every character can be a palindrome center.
2. Expand from center to left and right.
3. Count palindromes while characters match.
4. Do this for:

    Odd length palindrome
    Even length palindrome

5. Return total count.


Time Complexity:
O(n^2)
Because for each character we expand.

Space Complexity:
O(1)
No extra space used.


*/

#include <stdio.h>
#include <string.h>

/* Expand around center */
int expand(char *s, int left, int right) {
    
    int count = 0;
    
    while (left >= 0 && s[right] != '\0' && s[left] == s[right]) {
        count++;
        left--;
        right++;
    }
    
    return count;
}

int countSubstrings(char *s) {
    
    int total = 0;
    int n = strlen(s);
    
    for (int i = 0; i < n; i++) {
        
        // odd length palindrome
        total += expand(s, i, i);
        
        // even length palindrome
        total += expand(s, i, i + 1);
    }
    
    return total;
}

int main() {
    
    char s[] = "aaa";
    
    int result = countSubstrings(s);
    
    printf("Output: %d\n", result);
    
    return 0;
}
