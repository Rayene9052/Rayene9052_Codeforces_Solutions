
t=int(input())
numbers_list=[]
for i in range(t):
    n=int(input())
    numbers_list.append(n)
'''
    
def is_round_number(n):
    if (n<=9): 
        return True
    n_str=str(n)
    for i in range(1,len(n_str)):
        if n_str[i]!='0':
            return False
    return True
'''
for number in numbers_list:
    round_numbers=[]
    multiplier=1 # that's the place of the digit we are checking
    while number!=0:
        digit=number%10
        if digit!=0:
            round_numbers.append(digit*multiplier)
        number//=10
        multiplier*=10
    print(len(round_numbers))
    round_numbers.reverse()
    print(*round_numbers)
 
            





