n = int(input())
a = list(map(int, input().split()))

current_set = set() 
max_val = 0          

valid = True

for num in a:
    if num in current_set:
        valid = False
        break
    current_set.add(num)
    max_val = max(max_val, num)
    
    if len(current_set) == max_val:
        current_set = set()
        max_val = 0

if valid and len(current_set) == 0:
    print("YES")
else:
    print("NO")
