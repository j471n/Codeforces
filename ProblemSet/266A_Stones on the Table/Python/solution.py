n = int(input())
colours = input()
count = 0
previous_colour = colours[0]

for colour in colours[1:]:
    if colour == previous_colour:
        count += 1
    previous_colour = colour

print(count)




