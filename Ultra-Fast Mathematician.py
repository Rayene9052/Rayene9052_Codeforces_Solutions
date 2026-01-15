n=input()
m=input()
m_str=str(m)
n_str=str(n)
result=""
for i in range(len(n_str)):
    if (n_str[i]==m_str[i] and n_str[i]=='0'):
        result+='0'
    elif (n_str[i]==m_str[i] and n_str[i]=='1'):
        result+='0'
    else:
        result+='1'

        
print(result)