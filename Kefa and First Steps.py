n=int(input())
a=list(map(int,input().split()))
maximum_streak=1
count=1
i=0
for i in range(1,len(a))  :
    if (a[i]>=a[i-1] ):
       count+=1
       if (count>maximum_streak):
        maximum_streak=count
    else:
        count=1
print(maximum_streak)
