first=int(input("Enter first number: "))
SECOND  =int(input("Enter SECOND number: "))
def swaping(first,second ):
    first=first+second
    second=first-second
    first=first-second
    return(first,second)
print(swaping(first,SECOND))

