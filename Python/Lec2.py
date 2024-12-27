"""str1="this is a string.\nwe are creating it in python."
print(str1)#for the next line use of \n

str2="neev"
str3=" mendpara"
str4=str2+str3
print(str2+str3) #concatenation of two strings

len1=len(str3)
print(len1)
len2=len(str2)
print(len2)
len3=len(str4)
print(len3) #length of a string space not have been ignored
str5=str2+" "+str3
print(len(str5)) #concatenation of two strings with space in between
"""
#.....................................................
#string indexing
"""str="neev mendpara"
ch=str[6]
print(ch)"""
#....................................................
#string slicing
"""str="neev mendpara"
print(str[2:8]) #string slicing length - so get it 
print(str[:7])
print(str[5:])
print(str[-5:-1])#negative indecies is new in python
#string fnctions
str="neev mendpara"
print(str.endswith("ra"))#if end with this so give true else give false
print(str.capitalize())
print(str)#if we use capatilize so this not change our real string only excution time this valid
str=str.capitalize()
print(str)#but here we assign so this valid and change it
str="i am studying C++ from ApnaCollege from"
print(str)
print(str.replace("C++","Python"))
print(str)#as concept capitalize
print(str.find("o"))#first see and f
print(str.find("naCollege"))
print(str.count("e"))
print(str.count("from"))"""
#.....................................................
"""name=input("enter you first name : ")
print(len(name))
str=input("enter contain $ strings : ")
print(str.count("$"))"""
#............................................................
"""light="orange"
if(light=="red"):#indentation is very important for python
    print("stop your vehicle and don't move forward")
elif(light=="green"):
    print("move forward")
elif(light=="yellow"):
    print("start your vehicle and ready for forward")
else:
    print("invalid color")#else is not necessary but we use it"""
#............................................................. 
"""marks=int(input("enter your marks outof 100 : "))
if(marks>=90 and marks<=100):
    print("Grade get A")
elif(marks<90 and marks>=80):
    print("Grade get B")
elif(marks<80 and marks>=70):
    print("Grade get C")
elif(marks>30 and marks<70):
    print("Grade Get D")
elif(marks<=30):
    print("GRade Get F")
else:
    print("invalid marks")"""
#..............................................................
"""age=98
if(age>=18):
    if(age>=90):
        print("cannot drive")
    else:
        print("drive")
else:
    print("cannot drive")"""
#.............................................................
"""num=int(input("enter num so check it is even or odd"))
if(num%2==0):
    print("num is even")
else:
    print("num is odd")
        """
#............................................................
"""a=int(input("enter a : "))
b=int(input("enter b : "))
c=int(input("enter c : "))
if(a>c):
    if(a>b):
        print("a is biggest",a)
    else:
        print("b is biggest",b)
else:
    if(c>b):
        print("c is greatest",c)
    else:
        print("b is biggest",b)"""
#..............................................................

        
