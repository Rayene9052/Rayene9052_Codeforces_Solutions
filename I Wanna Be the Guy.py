n=int(input())
L=[x for x in range(1,n+1)]
P=list(map(int, input().split()))
P.remove(P[0])
Q=list(map(int, input().split()))
Q.remove(Q[0])
L_unique=[]
if (not P) and (not Q):
    print("Oh, my keyboard!")
else:
    for i in range(len(P)):
      if L_unique.count(P[i])==0:
            L_unique.append(P[i])
    for i in range(len(Q)):
        if L_unique.count(Q[i])==0:
            L_unique.append(Q[i])
    L_unique.sort()

    if (L==L_unique):
      print("I become the guy.")
    else:
        print("Oh, my keyboard!")
