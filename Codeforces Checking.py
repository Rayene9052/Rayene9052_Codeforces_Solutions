t=int(input())
results=[]
goal="CODEFORCES"
for i in range(t):
    k=input()
    if (k.upper() in goal):
        results.append("YES")
    else:
        results.append("NO")

for i in range(len(results)):
    print(results[i])




