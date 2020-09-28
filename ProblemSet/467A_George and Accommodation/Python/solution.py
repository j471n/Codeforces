# Date : 28-Sep-2020 By Jatin Sharma

rooms  = int(input())
count = 0
for i in range(rooms):
    p, q = map(int, input().split())
    if q-p >= 2:
        count +=1

print(count)
