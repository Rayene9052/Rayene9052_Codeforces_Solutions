'''nearly lucky '''

n=int(input())
n_str=str(n)
def lucky(n_str):
    lucky_count=0
    for i in range (len(n_str)):
        if (n_str[i]  in ['4','7']) :
            lucky_count+=1

    if (lucky_count==7 or lucky_count==4):
             return True
    return False

    

if lucky(n_str):
    print("YES")
else:
    print("NO")
        
