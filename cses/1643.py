n = int(input())
x = list(map(int, input().split()))
sum = [0] * n
sum[0] = x[0]
for i in range(1, n):
    sum[i] = sum[i - 1] + x[i]
min_sum = 1e18
res = -1e18
for i in range(n):
    res = max(res, sum[i])
    if i >= 1:
        res = max(res, sum[i] - min_sum)
    min_sum = min(min_sum, sum[i])
print(res)