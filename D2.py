t=int(input())
for j in range(t):
    n=int(input())
    ch=input()
    if n==1:
        if ch[0]=="<":
            print("SUCCESS")
    
        else:
            print("FAILURE")
    elif ch[0]=="<":
        print("FAILURE")

    else:        
        l=[z for z in ch]
        i=0

        while(len(l)!=0 and (0<=i<len(l) or -1*len(l)<=i<=-1)):
            if l[i]==">" and i<0:
                i=len(l)+i
                l=l[:i:]+l[i+1::]
            elif l[i]==">" and i>=0:
                i+=1
            elif l[i]=="<" and i<0:
                i=i-1
            elif l[i]=="<" and i>=0:
                l=l[:i:]+l[i+1::]
                if i==0:
                    i=-len(l)
                else:
                    i=i*(-1)

        if len(l)==0:
            print("SUCCESS")
        else:
            print("FAILURE")