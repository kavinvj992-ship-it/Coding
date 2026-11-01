# Task

# The provided code stub reads an integer, n. from STDIN. For all non-negative
# integers i < n. print i2.
# Sample Input :

# 5

# Sample Output :

# 0
# 1
# 4
# 9
# 16

n = int(input())
for i in range(n):
    print(i**2)