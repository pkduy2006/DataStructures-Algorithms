n = int(input())
a = []
for _ in range(n):
    start, end = map(int, input().split())
    a.append((start, end))
a.sort(key=lambda x: x[1])
res = 1
lastTime = a[0][1]
for i in range(1, n):
    if a[i][0] >= lastTime:
        res += 1
        lastTime = a[i][1]
print(res)