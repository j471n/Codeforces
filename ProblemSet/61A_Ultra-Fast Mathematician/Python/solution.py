# Date : 30-Sep-2020 By Jatin Sharma

n1 = list(map(int,input()))
n2 = list(map(int,input()))

result = []
length = len(n1)


for i in range(length):
    if n1[i] == 0 and n2[i] == 1:
        result.append(1)

    elif n1[i] == 0 and n2[i] == 0:
        result.append(0)

    elif n1[i] == 1 and n2[i] == 1:
        result.append(0)

    elif n1[i] == 1 and n2[i] == 0:
        result.append(1)

for i in result:
    print(i, end="")


"""
THIS IS MORE SIMPLE THAT I DID : (ANSWER #2)

x = input()
y = input()

result = ""
for i in range(len(x)):
    if x[i] == y[i]: result = result + "0"
    else: result = result + "1"

print(result)

"""
