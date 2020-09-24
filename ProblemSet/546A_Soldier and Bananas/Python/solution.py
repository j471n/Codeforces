k,n,w = map(int, input().split())
result =0

for i in range(1, w+1):
    result += k*i

if result > n:
    print(result-n)
else:
    print(0)