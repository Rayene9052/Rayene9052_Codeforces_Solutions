n=int(input())
L=list(map(int, input().split()))
L.sort(reverse=True)
sum=0
subsum=0
for i in range(n):
    sum+=L[i]
num=0
for i in range(len(L)):
    if (subsum<=(sum-subsum)): 
        subsum+=L[i]
        num+=1
print(num)