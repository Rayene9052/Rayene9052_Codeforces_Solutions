n=int(input())
untreated_cases=0
available_officers=0
events = list(map(int, input().split()))
for i in range(n):
    if events[i]>0:
        available_officers+=events[i]
    else:
        if available_officers>0:
            available_officers-=1
        else:
            untreated_cases+=1
    


print(untreated_cases)
