# Date : 28-Sep-2020 By Jatin Sharma

n, h = map(int, input().split())
a = list(map(int, input().split()))
width = 0

for i in range(n):
    if a[i] <= h:
        width +=1
    if a[i] > h:
        width +=2 

print(width)
    