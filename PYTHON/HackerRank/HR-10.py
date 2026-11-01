#Task:
# Given the names and grades for each student in a class of NV students, store
# them in a nested list and print the name(s) of any student(s) having the
# second lowest grade.
# Note: If there are multiple students with the second lowest grade, order their
# names alphabetically and print each name on a new line.

# Sample Input:
# 5
# Harry
# 37.21
# Berry
# 37.21
# Tina
# 37.2
# Akriti
# 41
# Harsh
# 39

# Sample Output:
# Berry
# Harry
students = []

n = int(input())

for i in range(n):
    name = input()
    grade = float(input())
    students.append([name, grade])

# Step 1: get grades
grades = []
for student in students:
    grades.append(student[1])

# Step 2: unique grades
unique_grades = list(set(grades))

# Step 3: sort
unique_grades.sort()

# Step 4: second lowest
second_lowest = unique_grades[1]

# Step 5: get names
result = []
for student in students:
    if student[1] == second_lowest:
        result.append(student[0])

# Step 6: sort names
result.sort()

# Step 7: print
for name in result:
    print(name)