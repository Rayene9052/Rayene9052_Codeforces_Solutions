n=int(input())
answer=[]
for i in range(n):
    ch=input()
    if ch.upper()=='YES':
         answer.append('YES')
    else:
         answer.append('NO')
for res in answer:
    print(res)