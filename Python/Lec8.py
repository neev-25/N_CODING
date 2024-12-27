"""class Car:
    color="white"
    brand="toyota"
    name=input("enter car name : ")
    
car1=Car()
print(car1.color)
print(car1.brand)
print(car1.name)
"""
#..........................................................
#constructor
"""class student:
    name="neev"
    def __init__(self):
        print(self)
        print("adding new student")
        
s1=student("")
print(s1)
print(s1.name)"""
#..........................................................
"""class student:
    name="neev"
    def __init_(self):#default constructor
        pass
    def __init__(self,fullname,marks):#parameterized constructor
        self.name=fullname
        self.marks=marks
        print(self)
        print("adding new student")
        
s1=student("neev mendpara",98)
print(s1.name,s1.marks)
s2=student("mathan jasoliya",99)
print(s2.name,s2.marks)"""
#..........................................................
"""class student:
    collage="IIIT VADODARA"#class commmon atributes
    def __init__(self,fullname,marks):#parameterized constructor
        self.name=fullname
        self.marks=marks#instance persnal attributes
        print(self)
        print("adding new student")
        
s1=student("neev mendpara",98)
print(s1.name,s1.marks,s1.collage)
s2=student("mathan jasoliya",99)
print(s2.name,s2.marks,s2.collage)"""
#....................................................................
"""class student:
    collage="IIIT VADODARA"#class commmon atributes
    def __init__(self,fullname,marks):#parameterized constructor
        self.name=fullname
        self.marks=marks#instance persnal attributes
        print(self)
        print("adding new student")
    def Hello(self):
        print("Hello,Welcome To I^3T vadodara")
    def get_marks(self):
        return self.marks
        
s1=student("neev mendpara",98)
print(s1.name,s1.marks,s1.collage)
s2=student("mathan jasoliya",99)
print(s2.name,s2.marks,s2.collage)
s1.Hello()
print(s1.get_marks)"""
#................................................................
"""class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def get_avg(self):
        total = sum(self.marks)
        return total / len(self.marks)

# Creating student instances
s1 = Student("Neev Mendpara", [99, 96, 95, 99, 92])
s2 = Student("Manthan Jasoliya", [93, 97, 95, 95, 99])

# Calculate averages
avg1 = s1.get_avg()
avg2 = s2.get_avg()

# Print averages
print(s1.name, "has an average score of:", avg1)
print(s2.name, "has an average score of:", avg2)

# Compare averages
if avg2 > avg1:
    print(s2.name, "has the highest average score.")
else:
    print(s1.name, "has the highest average score.")"""
#.....................................................................
"""class student:
    @staticmethod#is is not use static method so it give eroor but here static method chage behaviuor of the function
    def collage():
        return "IIIT VADODARA"
    
    print(collage())"""
#...................................................................................
class account:
    def __init__(self,bal,acc):
        self.balance=bal
        self.account_no=acc
    def debit(self,amount):
        self.balance-=amount
        print("Rs,",amount,"has debited")
        print("total balance = ",self.get_balance())
        
    def credit(self,amount):
        self.balance+=amount
        print("Rs,",amount,"has credited")
        print("total balance = ",self.get_balance())
        
    def get_balance(self):
        return self.balance
    
acc1=account(10000,12345)
print(acc1.balance)
print(acc1.account_no)
acc1.debit(2000)
acc1.credit(5000)
#.........................................................................
