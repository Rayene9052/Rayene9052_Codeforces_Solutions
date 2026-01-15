y=int(input())
def distant(k):
    for i in range(len(k)):
        for j in range(i+1,len(k)):
            if (k[i]==k[j]):
                return False
    return True
x=0
for i in range(y+1,9013):
    if (distant(str(i))):
        x=i
        break
print(x)

