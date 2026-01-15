n=int(input())
s=input()
a=0
d=0
while (len(s)!=n ):
    s=input()
s=s.upper()
for i in range (len(s)):
    if s[i]=='A':
        a+=1
    elif s[i]=='D':
        d+=1

if (a>d):
    print("Anton")
elif(d>a):
    print("Danik")
else:
    print("Friendship")
