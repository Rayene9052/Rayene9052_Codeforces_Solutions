a,b,c,d=map(int ,input().split())
L=[]
L.append(a)
L.append(b)
L.append(c)
L.append(d)
L_unique=[]
for i in range(4):
    if L_unique.count(L[i])==0:
        L_unique.append(L[i])
print(4-(len(L_unique)))
