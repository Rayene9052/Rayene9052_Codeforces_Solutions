s=input()
L=list(s)
correct=['h','e','l','l','o']
found_correct_letter=[]

j=0
for i in range(len(correct)):
    while (j<len(L)):
               if(correct[i] ==L[j]):
                   found_correct_letter.append(correct[i])
                   j+=1
                   break
               j+=1


m=''.join(found_correct_letter)
if (m=='hello'):
    print("YES")
else:
    print("NO")
