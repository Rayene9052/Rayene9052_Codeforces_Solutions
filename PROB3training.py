t = int(input())
def the_function(L,n):
    n_string = str(n)
    length_str = len(n_string)
    if (length_str > 2):
        if (n% L[length_str]==0):
            return ("YES")
        else:
            return(the_function(L,n // L[length_str]))
    else:
        if (n%11==0):
            return("YES")
        else:
            return("NO")
for i in range(t):
    n=int(input())
    L=["",""]
    i=2
    test = False
    while (int(i*'1')<n):
        L.append(int(i*'1'))
        i+=1

    for i in range(2,len(L)):
        if (n%L[i]==0):
            print("YES")
            test= True
            break
    if test == False:
        print(the_function(L,n))


