# Date : 30-Sep-2020 By Jatin Sharma

n = int(input())
level = list(map(int, input().split()))

if 1 in level:
    print("HARD")
else:
    print("EASY")