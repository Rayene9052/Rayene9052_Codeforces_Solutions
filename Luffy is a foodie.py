t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    
    left_curr = []
    right_curr = []
    
    curr = 0
    for i in range(n):
        if s[i] == '.':
            left_curr.append(curr)
           
        elif s[i] == '#':
            curr += 1
        else:
            curr = 0
    left_curr.append(curr)
    
    curr = 0
    for i in range(n - 1, -1, -1):
        if s[i] == '.':
            right_curr.append(curr)
            
            
        elif s[i] == '#':
            curr += 1
        else:
            curr = 0
    curr=0
    right_curr.append(curr)
    print(left_curr)
    ans = max(max(left_curr), max(right_curr))
    print(ans)
