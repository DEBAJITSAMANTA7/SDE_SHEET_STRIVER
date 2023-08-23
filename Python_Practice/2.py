# Check Prime or not
x=int(input("enter a number"))
if(x>=2):
    for i in range(2,x,+1):
        if(x%i)==0:
            print("not prime")
            break
    else:
        print("prime")
else:
    print("enter a right  no in the program")