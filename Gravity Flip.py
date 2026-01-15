n=int(input())
L=list(map(int, input().split()))
L.sort()
s=""
for i in range(len(L)):
    s+=str(L[i])+" "
print(s)