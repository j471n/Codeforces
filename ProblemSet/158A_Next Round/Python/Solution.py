n,k = map(int, input().split())
count = 0
score = list(map(int, input().split()))

for i in range(len(score)):
    if score[i] >= score[k-1] and score[i] >0:
        count +=1

print(count)
