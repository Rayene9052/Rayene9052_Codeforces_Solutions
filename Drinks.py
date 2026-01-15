n=int(input())
values=list(map(int,input().split()))
percentage=0
for i in range(n):
    percentage+=values[i]
percentage=percentage/(n)
print(percentage)
