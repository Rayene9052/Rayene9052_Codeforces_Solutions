n,t=map(int,input().split())
s=input()
L=list(s)
for i in range(t):
    j=0
    while(j<n-1):
        if (L[j]=='B' and L[j+1]=='G'):
            L[j+1],L[j]=L[j],L[j+1]
            j=j+2
        else:
            j=j+1
            
m=''.join(L)
print(m)
