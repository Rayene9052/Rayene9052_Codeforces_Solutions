n=int(input())
L=[]
M=[] 
for i in range(n):
    s=[i for i in input().split(" ")]
    L.append(s[0])
    L.append(s[1])
    L.append(0)

    M.append(s[1])
    M.append(0)
q=int(input())
for j in range(q):
    z=[j for j in input().split(" ")]
    M[1+M.index(L[1+L.index(z[0])])]+=int(z[1])
max=0
ind=0
for i in range(len(M)):
    if(type(M[i])==int):
        if max<M[i]:
            max=M[i]
            ind=i-1
print(M[ind])