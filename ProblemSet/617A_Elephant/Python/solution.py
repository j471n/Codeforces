cor = int(input())

steps = 0

while cor != 0:
    if cor >= 5:
        cor -= 5
        steps += 1
    elif cor >= 4:
        cor -= 4
        steps += 1
    elif cor >= 3:
        cor -= 3
        steps += 1
    elif cor >= 2:
        cor -= 2
        steps += 1
    elif cor >= 1:
        cor -= 1
        steps += 1

print(steps)
