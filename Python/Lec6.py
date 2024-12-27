"""def calc_sum(a,b):
    sum=a+b
    print(sum)
    return sum

calc_sum(5,10)
calc_sum(22,313)
calc_sum(231,212)

def sum(a,b):
    return a+b

total=sum(21,12)
print(total)

def p_hello():
    print("Hello, world!")#no parameters and no return type is valid
    
p_hello()#no arguments is valid to calling function
p_hello()
p_hello()
p_hello()
op=p_hello()
print(op)#this is give us to none 

def avg(a,b,c):
    return (a+b+c)/3
avrg=avg(10,22,32)
print(avrg)
"""
#.............................................................................

#print is inbulit finction
"""print("neev",end=" ")#in sep=" " it is sepreator this default by \n but here we change it to two word become show in one line
print("kumar")#it is print in new line
#print || len || type || range is inbulit functions
def cal_prod(a=2,b=3):#if not pass arguments so take this 
    print(a*b)
    return a*b
cal_prod(5)#no arguments passed it and ^|"""
#if i pass only one so this treat as a sequance in this a after b 
#here a=5 and defulat as b=3 so output will be 15
#also not this in parameters first is non defualt and after is default is allow  but oppposite is not allowed in this
#last thi default value devi shru karvi

#.............................................................................

"""cities=["surat","ahmedabad","vadodara","rajkot"]
heroes=["ironman","thor","blackpather","captian america"]
print(len(cities))#by defult func
def p_len(list):
    print(len(list))
p_len(heroes)"""

#.....................................................................

"""cities=["surat","ahmedabad","vadodara","rajkot"]
def p_len(cities):
    for city in cities:
        print(city,end=" ")
p_len(cities)
"""
#.........................................................

"""def fact(n):
    if n==0 or n==1:
        return 1
    else:
        return n*fact(n-1)
    
def cal_fact(n):
    fact=1
    for i in range(1,n+1):
        fact=fact*i
    return fact#spacing is very important
    
print(fact(5))
print(cal_fact(5))"""

#...................................................................
"""def converter(usd_val):
    inr_val = usd_val * 85.33
    print(usd_val,"USD = ",inr_val,"INR")
converter(5)

def func(num):
    if(num%2==0):
        print(num,"is even")
    else:
        print(num,"is odd")   
func(4)"""
#.....................................................................
#####.....RECURSION.....#####
"""def show(n):
    if n==0:
        return
    else:
        print(n,end=" ")
        show(n-1)
        print("END",end=" ")
show(10)#call stack method in this uses"""
#.............................................................
def cal_sum(n):
    if n==0:
        return 0 
    else:
        return n+cal_sum(n-1)
print(10)

def p_list(list,idx):
    if idx==len(list):
        return
    else:
        print(list[idx],end=" ")
        p_list(list,idx+1)
        
list=["neev","manthan","ayush","yug","pinak","gaurav"]
p_list(list,0)

