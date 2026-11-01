def sum_of_first_N_number(n):
    if n==0:
        return 0
    return n+sum_of_first_N_number(n-1)
print(sum_of_first_N_number(10))