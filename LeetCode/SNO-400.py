# 9. Palindrome Number
# Difficulty level: Easy

class Solution:
    def isPalindrome(self, x):
        if x < 0:
            return False
        original = x
        reverse = 0
        while x > 0:
            reverse *= 10
            reverse += x % 10
            x //= 10
        return reverse == original

solution = Solution()
print(solution.isPalindrome(121))
print(solution.isPalindrome(-121))
print(solution.isPalindrome(10))