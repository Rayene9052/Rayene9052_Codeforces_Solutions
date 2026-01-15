t = int(input())

def the_function(n,s):
    L=[]
    for i in range(len(s)):
        if s[i]==">":
            L.append(s[i])
        if s[i]=="<":
            if L[-1]==">":
                L.pop()
            else:
                return("FAILURE")
    return("SUCCESS")
                
        
for _ in range(t):
    n = int(input())
    s = input()
    print(the_function(n,s))