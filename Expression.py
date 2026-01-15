L=[]
for i in range(3):
    n=int(input())
    L.append(n)
maxi=[]

maxi.append(L[0]+L[1]+L[2])
maxi.append(L[0]*L[1]*L[2])
maxi.append(L[0]+L[1]*L[2])
maxi.append(L[0]*L[1]+L[2])
maxi.append((L[0]+L[1])*L[2])
maxi.append(L[0]*(L[1]+L[2]))
print(max(maxi))
                        
