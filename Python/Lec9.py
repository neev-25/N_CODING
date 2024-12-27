"""class student:
    def __init__(self, name):
        self.name = name
s1=student("neev")
del s1#here useing del s1 is automatically deldeted so 
print(s1)#after print give me error"""
#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
"""class account:
    def __init__(self,acc_no,acc_pass):
        self.acc_no=acc_no
        self.__acc_pass=acc_pass#for privete teo underscore (__)require
    def reset_pass(self):
        print(self.__acc_pass)
        
acc1=account("12345","abcde")
print(acc1.acc_no)
#this is password not show we use privte bellow
#print(acc1.acc_pass)#now this is not accessable
print(acc1.reset_pass()) #this is accsesible"""
#::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
"""class person:
    __name="neev"
    
    def __hello(self):
        print("hello")
        
    def welcome(self):
        self.__hello()
        
p1=person()
# print(p1.__name)#both method and atributes are not accsisble 
# print(p1.__hello())
print(p1.welcome())"""#this is nt give error this access so this use in private
#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
"""class car:
    color="black"
    @staticmethod
    def start():
        print("car is start")
    @staticmethod
    def stop():
        print("car is stop")
        
class toyotacar(car):
    def __init__(self,name):
        self.name=name
        
car1=toyotacar("fortuner")
car2=toyotacar("innova")
print(car1.name)
print(car1.start())
print(car1.stop())
print(car1.color) #this is accessable"""
#here toyota inherite all methods from parent class
#::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#multilevel inheritance
"""class car:
    @staticmethod
    def start():
        print("car is start")
    @staticmethod
    def stop():
        print("car is stop")
        
class toyotacar(car):
    def __init__(self,brand):
        self.name=brand
        
class fortuner(toyotacar):
    def __init__(self,type):
        self.type=type
        
car1=fortuner("diesel")
car1.start()"""
#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
#multiple inheritance
"""class A:
    varA="welcome to class A"
    
class B:
    varB="welcome to class B"
    
class C(A,B):
    varC="welcome to class C"
    
c1=C()
print(c1.varC)
print(c1.varA)
print(c1.varB)"""
#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
"""class car:
    def __init__(self,type):
        self.type=type
    @staticmethod
    def start():
        print("car is start")
        @staticmethod
        def stop():
            print("car is stop")

class toyotacar(car):
    def _init_(self,name,type):
        self.name=name
        super().start()
        
car1=toyotacar("prius","electric")
print(car1.type) """   
#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
class person:
    name="anonymous"
    def changename(self,name):
        self.__class__.name="rahul"
        
p1=person()
p1.changename("rahul kumar")
print(p1.name)
print(person.name)
    
    
    

