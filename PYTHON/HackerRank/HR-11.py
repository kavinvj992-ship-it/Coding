#Task:
# The provided code stub will read in a dictionary containing key/value pairs of
# name:[marks] for a list of students. Print the average of the marks array for
# the student name provided, showing 2 places after the decimal.

# Sample Input:
# 3
# Krishna 67 68 69
# Arjun 70 98 63
# Malika 52 56 60
# Malika

# Sample Output:
# 56.00
n = int(input())
student_marks = {}

for i in range(n):
    data = input().split()
    name = data[0]
    marks = list(map(float, data[1:]))
    student_marks[name] = marks

query_name = input()

marks_list = student_marks[query_name]
average = sum(marks_list) / len(marks_list)

print(f"{average:.2f}")