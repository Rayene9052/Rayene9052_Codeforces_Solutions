n=int(input())
L=list(map(int,input().split()))
maxi=max(L)
mini=min(L)
moves=0
def minindex(L):
    index=0 
    min=L[0]
    for i in range(len(L)):
        if L[i]<=min:
            min=L[i]
            index=i
    return index

def maxindex(L):   
    index=0 
    max=L[0]
    for i in range(len(L)):
        if L[i]>max:
            max=L[i]
            index=i
    return index
indexmini=minindex(L)
indexmaxi=maxindex(L)
if indexmini==indexmaxi:
    print(0)
    exit()
while indexmini!=n-1 or indexmaxi!=0:
    if indexmaxi!=0 :
        indexmaxi-=1
        if indexmini!=indexmaxi:
            moves+=1
    if indexmini!=n-1:
        indexmini+=1
        if indexmini!=indexmaxi:
            moves+=1
    if indexmini==n-1 and indexmaxi==0:
        break
print(moves)
