L=[]
num=0
def multiple(n,L):
    for i in range(len(L)-1):
        if n%L[i]==0:
            return True
    return False
for i in range(5):
    n=int(input())
    L.append(n)
d=L[-1]
# i made a mistake by adding d to this comparaison
if 1 in L[0:3]:
    print(L[-1])
else:
    #i first thought that i need to check prime but nah checking multiples is enough
    for i in range(1,d+1):
        if (not multiple(i,L)):
            num+=1
    print(d-num)
