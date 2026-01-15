from math import gcd
import random
n=int(input())
def factorial(n):
    fact=1
    for i in range(1,n+1):
        fact=fact*i
    return(fact)

def combinaison(n,p):
    return(factorial(n)/(factorial(p)*factorial(n-p)))

results=[]
L=[int(i) for i in input().split(" ")]
if (1 in L ):
    print(1)
else:
    T=L
    for i in range(1,int(combinaison(n,2))):
        L=T
        while(len(L)>1):
            x=L[random.randint(0,len(L)-1)]
            L.remove(x)
            y=L[random.randint(0,len(L)-1)]
            pgcd=gcd(x,y)
            L.remove(y)
            L.append(pgcd)
        
        if pgcd not in results:
            results.append(pgcd)
        
        
print(len(results))
for i in results:
    print(i,end=" ")
 


    
