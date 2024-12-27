"""num=int(input("enter the number : "))
for i in range(1,11):
    print(f"{num}*{i}={num*i}")"""
#::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
"""l=["neev","manthan","nil","noruto"]
for name in l:
    if(name.startswith("n")):
        print(name)
    else:
        print("___")"""
#::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
"""n=int(input("enter a number : "))
for i in range(2,n):
    if(n%i==0):
        print(f"{n} is not a prime number")
        break
else:
        print(f"{n} is a prime number")"""
#::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
"""n=int(input("enter the number  :" ))
for i in range(1,n+1):
    print(" "*(n-i),end=" ")
    print("*"*(2*i-1),end=" ")
    print("")"""
#::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
for i in range(0,3):
    for j in range(0,3):
        if (i==1 and j==1):
            print(" ",end=" ")
        else:
            print("*",end=" ")
    print("\n")












































