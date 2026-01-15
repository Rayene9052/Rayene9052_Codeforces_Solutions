n=int(input())
s=input()
alphabet="abcdefghijklmnopqrstuvwxyz"
for i in range(len(s)):
    if s[i].lower() in alphabet:
        alphabet=alphabet.replace(s[i].lower(),"")
if len(alphabet)==0:
    print("YES")
else:
    print("NO")
    