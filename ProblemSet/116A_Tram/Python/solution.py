n = int(input())
l = list()
t = 0

for i in range(n):
    a, b  = map(int, input().split())
    t -= a
    t += b
    l.append(t)

print(max(l))