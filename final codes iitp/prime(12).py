print("Enter limit of numbers:")
n=int(input())
if n>=1:
    print ("The first", n,"prime numbers are: 2",end=" ")
i=3
ct=2
while ct<=n:
    c=2
    while c<i:
        if i%c==0:
            break
        c+=1
    if c==i:
        print (i,end=" ")
        ct+=1
    i=i+1
    