# Task:

# The included code stub will read an integer, n, from STDIN.
# Without using any string methods, try to print the following:
# 123 ... n
# Note that " ... " represents the consecutive values in between.

# Sample Input:
# 3

# Sample Output:
# 123
if __name__ == '__main__':
    n = int(input())
    for i in range(n+1):
        if(i==0):
            continue
        print(i,end="")