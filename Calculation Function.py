def functionX(n):
    result=0
    for i in range(n+1):
        result+=i*(-1)**i
    return result
def functionXrecursive(n):
    result=0
    if(n==1):
        return(-1)
    else:
        return(functionXrecursive(n-1)+ ((-1)**n)*n)
def functionOptimal(n):
    if (n%2==0):
        return(n/2)
    else:
        return((-1)* (n//2 +1))
n=int(input())
print(int(functionOptimal(n)))
