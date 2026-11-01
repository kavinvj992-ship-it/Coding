def ntoone(n):
    if n==0:
        return
    ntoone(n-1)
    return n
print(ntoone(10))