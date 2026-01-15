n=int(input())
L=[]
groups=1
for i in range(n):
    a=input()
    L.append(a)
for i in range(n-1):
    L[i]=str(L[i])
    if (L[i][1]==L[i+1][0]):
        groups+=1
print(groups)   
    

