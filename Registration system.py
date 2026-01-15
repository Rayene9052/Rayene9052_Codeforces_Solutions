n=int(input())
cnt={}
out=[]
for _ in range(n):
    name=input()
    if name not in cnt:
        out.append("OK")
        cnt[name]=1
    else:
        out.append(f"{name}{cnt[name]}")
        cnt[name]+=1
print(cnt)
