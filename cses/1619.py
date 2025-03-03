import bisect

n = int(input())
event = []
enter = []
leave = []
res = 0
for _ in range(n):
    start, end = map(int, input().split())
    event.append(start)
    event.append(end)
    enter.append(start)
    leave.append(end)
event.sort()
enter.sort()
leave.sort()
for i in event:
    cnt1 = bisect.bisect_right(enter, i) - 1
    cnt2 = bisect.bisect_right(leave, i) - 1
    res = max(res, cnt1 - cnt2) 
print(res)