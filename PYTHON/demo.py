def reverse_words(s):
    """
    Parameters:
        s (str)
    Returns:
        str
    """
    # write your solution below
    word=""
    words=[]
    for i in s:
        if(i==" "):
            words.append(word)
            word=""
        else:
            word+=i
    words.append(word)
    result=""
    for j in range(len(words)-1,-1,-1):
        result+=words[j]
        if(j!=0):
            result+=" "
    return result
    pass



# --------------------------------------------------------------
# Example Input:
# hello world python

s = input().strip()
print(reverse_words(s))