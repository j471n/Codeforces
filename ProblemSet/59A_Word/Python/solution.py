str = input()
up, low = 0,0
for i in range(len(str)):
    if str[i] == str[i].upper():
        up += 1
    else:
        low +=1

if up > low:
    print(str.upper())
else:
    print(str.lower())