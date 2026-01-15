t=int(input())
L=[]
moves_list=[]

for i in range(t):
    a,b=map(int ,input().split())
    L.append((a,b))
for i in range(len(L)):
    if L[i][0]%L[i][1]==0:
        moves=0
    else:
        moves=L[i][1]-L[i][0]%L[i][1]
    # car a +(b-r) = 0 (mod b) car r= le rest de la division de a par b (a=r(mod b)) it's like the r removes
    # donc b-r est le nombre de moves 
        moves_list.append(moves)
for i in range(len(moves_list)):
    print(moves_list[i])
