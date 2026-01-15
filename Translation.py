s=input()
t=input()
s=s.lower()
t=t.lower()
def equal(s,t):
    m=s[::-1]
    if (len(m)!=len(t)):
        return("NO")
    for i in range(len(m)):
        if t[i]!=m[i]:
            return("NO")
            break
    return("YES")
print(equal(s,t))
