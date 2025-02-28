class Solution:
    def missingNumber(self, nums):
        mark = [False] * (len(nums) + 1)
        for num in nums:
            mark[num] = True
        for i in range(len(mark) + 1):
            if not mark[i]:
                return i

solution = Solution()
print(solution.missingNumber([3, 0, 1]))
print(solution.missingNumber([0, 1]))
print(solution.missingNumber([9, 6, 4, 2, 3, 5, 7, 0, 1]))