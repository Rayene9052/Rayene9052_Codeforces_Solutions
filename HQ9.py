p=input()
value=False
instructions=['H','Q','9']
for i in range(len(p)):
    if p[i] in instructions:
        print('YES')
        value=True
        break
if (i==len(p)-1 and value==False):
    print("NO")

