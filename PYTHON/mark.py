marks = []

for i in range(6):
    m = int(input("Enter mark: "))
    marks.append(m)

maximum = marks[0]
minimum = marks[0]

for m in marks:
    if m > maximum:
        maximum = m
    if m < minimum:
        minimum = m

print("Maximum mark:", maximum)
print("Minimum mark:", minimum)