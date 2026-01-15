n=int(input())
maxi=0
current_passengers=0
L=[]
for i in range(n):
    a,b=map(int,input().split())
    L.append(b-a)
    current_passengers+=L[i]
    if maxi<current_passengers:
        maxi=current_passengers
print(maxi)

    

