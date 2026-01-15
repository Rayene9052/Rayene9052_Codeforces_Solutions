s="I hate it"
p="I love it"
s1="I hate that"
p1="I love that"
L=[]
n=int(input())
for i in range(n):
    if (i==n-1):
        if (i%2==0):
            L.append(s)
        else:
            L.append(p)
    elif (i%2==0):
        L.append(s1)
    else:
        L.append(p1)
output=' '.join(L)
print(output)
