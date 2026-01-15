n,h=map(int, input().split())
L=list(map(int,input().split()))
pw=0
for i in range (len(L)):
    if (L[i]>h):
        pw+=2
    else:
        pw+=1
print(pw)
    
