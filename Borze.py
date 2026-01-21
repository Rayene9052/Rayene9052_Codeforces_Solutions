ch=input()
i=0
result=''
while i<len(ch):
    if ch[i]=='.':
        result+='0'
        i=i+1
    elif (ch[i]=='-' and ch[i+1]=='.'):
        result+='1'
        i=i+2
    else:
        result+='2'
        i=i+2
print(result)
    
