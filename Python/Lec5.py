"""i=1
while(i<=5):
    print("hello",i)
    i+=1
while(i>=1):
    print("hello",i)
    i-=1
num=1
while(num<=100):
    print(num)
    num+=1

while(num>=1):
    print(num)
    num-=1
    
num=1
n=int(input("enter number : "))
while(num<=10):
    print(n,"*",num,"=",n*num)
    num+=1
    
num=1
while(num<=10):
    print(num*num)
    num+=1

nums=[1,4,9,16,25,36,49,64,81,100]
i=0
while(i<len(nums)):
    print(nums[i])
    i+=1
    
tupli=(1,4,9,16,25,36,49,64,81,100)
i=0
x=36
while(i<len(tupli)):
    if(tupli[i]==x):
        print("number found at index : ",i)
        
        i+=1
    else:
        i+=1
"""
#..................................................................
"""i=1
while(i<=5):
    print(i)
    if(i==3):
        break
    i+=1
    
print("eol")#if we write with tab means as  line in loop so this statements also count with in loop
i=0
while(i<=10):
    if(i%2==0):
        i+=1
        continue
    print(i)#if continue condition staisfy so after this statemnts there is no excution of program
    i+=1"""
#.......................................................................
#for loop
"""nums=[1,2,3,4,4,5,5]
for val in nums:
    print(val)
    
tup=(1,32,2,32,21,132)
for val in tup:
    print(val)

str="mendpara neev bharatbhai."
for char in str:
    if(char=='v'):
        print("v founr in str at",char)
        break
    print(char)
else:
    print("v not found in str")#else statment is optional in for loop
    
loop=[1,4,23,23,2,2342,2342,423,2443565,534]
for val in loop:
    print(val)
    
loop=(1,4,23,23,2,2342,2342,423,2443565,534)
x=23    
idx=0
for val in loop:
    if(val==x):
        print("found at : ",idx)
        break
    idx+=1"""
#.......................................................................
"""print(range(5))
for val in range(5):#deffault this starting from 0 and steps take of one
    print(val)
    
for val in range(0,10,2):#range(start(optional),stop,step(optional))
    print(val)#range function is used to generate sequence of number from 0 to 10 with

for val in range(100,0,-1):
    print(val)
    
n=int(input("enter the num : "))
for val in range(1,11,1):#in end of the elements is not included so please note it
    print(n,"*",val,"=",n*val)"""
#..........................................................................
"""for i in range(10):
    pass

if i>5:
    pass
print("some useful well add.")"""
#.............................................................................
sum=0
for val in range(1,10,1):
    sum+=val
print(sum)

fact=1
for val in range(1,11,1):
    fact*=val     
    print(val,"!=",fact)










