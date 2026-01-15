n=int(input())
places=[]
num=0
for i in range(n):
    a,b=map(int,input().split())
    places.append(b-a)
for j in range(len(places)):
    if(places[j]>1):
        num+=1
print(num)
        
    
