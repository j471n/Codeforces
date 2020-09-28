#  Date : 28-Sep-2020 By Jatin Sharma

games = int(input())
win = input()
anton = 0
danik = 0

for i in range(len(win)):
    if win[i]=="A":
        anton+=1
    elif win[i] == "D":
        danik+=1


if anton > danik:
    print("Anton")
elif anton < danik:
    print("Danik")
elif anton == danik:
    print("Friendship")