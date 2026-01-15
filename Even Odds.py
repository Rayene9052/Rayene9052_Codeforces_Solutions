a,b=map(int ,input().split())
'''
that's the reverse
if (b%2==0):
    print(a//2+1+b//2)
else:
    print(b//2+1)
'''
odds = (a + 1) // 2 
if (a%2==0):
    if (b<=a//2):
       print(2*b-1)
    else:
       print(2*b-odds*2)
else:
    if (b<=a//2+1):
        print(2*b-1)
    else:
       print(2*b-odds*2)
 
 
    
