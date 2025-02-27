# Problem No 209. Minimum Size Subarray Sum
# Difficulty: Medium

class Solution:
    def minSubArrayLen(self, target, nums):
        s = [0] * (len(nums) + 1)
        for i in range(1, len(nums) + 1):
            s[i] = s[i - 1] + nums[i - 1]

        def check(size):
            for i in range(1, len(nums) - size + 2):
                if s[i + size - 1] - s[i - 1] >= target:
                    return True
            return False
        if s[-1] < target:
            return 0
        l = 0
        r = len(nums)
        while l <= r:
            mid = (l + r) // 2
            if check(mid):
                r = mid - 1
            else:
                l = mid + 1
        return l

solution = Solution()
print(solution.minSubArrayLen(7, [2, 3, 1, 2, 4, 3])) 
print(solution.minSubArrayLen(4, [1, 4, 4]))
print(solution.minSubArrayLen(11, [1, 1, 1, 1, 1, 1, 1, 1]))