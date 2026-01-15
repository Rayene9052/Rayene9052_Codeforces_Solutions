n=int(input())
def lucky(n):
    n_str=str(n)
    for j in range(len(n_str)):
        if n_str[j] not in ['4','7']:
            return False
    return True

def lucky_division(n):
    for i in range(1,n+1):
        if (n%i==0 and lucky(i)):
            return("YES")
    return("NO")
print(lucky_division(n))
        
            
