#Task:

# Given the participants' score sheet for your University Sports Day. you are
# required to find the runner-up score. You are given n scores. Store them in a
# list and find the score of the runner-up.

# Sample Input
# 5
# 23665

# Sample Output:
# 5

n = int(input())
scores = list(map(int, input().split()))

scores = list(set(scores))  # remove duplicates
scores.sort()               # sort list

print(scores[-2])           # runner-up