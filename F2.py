n=int(input())
L=[]
nbr=[]
M=[] 
for i in range(n):
    s=[i for i in input().split(" ")]
    L.append(s[0])
    L.append(s[1])
    L.append(0)
q=int(input())
for j in range(q):
    z=[j for j in input().split(" ")]
    L[L.index(z[0])+2]+=int(z[1])
   

for i in range(len(L)):
    if(type(L[i])==int):
        if (L[i-1] not in M ):
            M.append(L[i-1])
            M.append(0)
        M[M.index(L[i-1])+1]+=int(L[i])
max=0
ind=0
for i in range(len(M)):
    if(type(M[i])==int):
        if max<M[i]:
            max=M[i]
            ind=i-1

print(M[ind])


       


    







