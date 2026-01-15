'''
def increase(ch):
    i=0
    c=True
    ch=ch[::-1]
    while(c):
        if ch[i]=="0":
            ch=ch[:i:]+"1"+ch[i+1::]
            c=False
        else:
            ch=ch[:i:]+"0"+ch[i+1::]
            i=i+1
    return ch[::-1]
t=int(input())
for _ in range(t):
    n,s=map(int,input().split(" "))
    s=str(s)
    smax="1"*len(s)
    n=0
    while(s!=smax):
        s=increase(s)
        n+=1
    print(n)
''''
def increase(ch):
    ch = list(ch[::-1])
    i = 0
    while True:
        if ch[i] == "0":
            ch[i] = "1"
            break
        else:
            ch[i] = "0"
            i += 1
    return "".join(ch[::-1])

t = int(input())
for _ in range(t):
    n, s = map(int, input().split())
    s = str(s)
    smax = "1" * len(s)
    n = 0
    while s != smax:
        s = increase(s)
        n += 1
    print(n)
