"""f=open("D:\Coding\Python\demo.txt","rt")
#data=f.read()#inside input note that how many char you want to print 
#print(data)
line1=f.readline()#if we first read data and after we read line by line so this read  empty line beacuase our reading cursor is go to end of the file's data
print(line1)
line2=f.readline()
print(line2)
#print(type(data))
f.close()
f=open("D:\Coding\Python\demo.txt","w")
f.write("i wamt to learn java and java script.")#this cahnge overwrite the previous data of the file.
f=open("D:\Coding\Python\demo.txt","a")
f.write("\nand after that i read different libarary in the python.")
f.close()
#this is not overwrite data but append new data to previous data of the file.
#if file was not exist and we open file in  the write("w") or the append("a") mode so create automatically file in the folder.
f=open("sample.txt","w")
f.write("i am a good boy.")
#if we want to overwrite some data that begining of the file so we do..
f=open("sample.txt","r+")
f.write("this is a good boy.")
f.close()"""
#....................................................................................................................................................................
"""with open("D:\Coding\Python\demo.txt","r") as f:#here 'as f' measn this is alias like i tony start as a iron man
    data=f.read()
    print(data)#in with file is automatically closed so tjis advantage of this
import os
os.remove("sample.txt")"""
#.....................................................................................................
"""with open("practice.txt","w") as f:
    f.write("Hi everyone\n we are learning file I/O\n")
    f.write("using java.\n like programming in java.")
with open("practice.txt","r") as f:
    data=f.read()
    newdata=data.replace("java","python")#is we need to replace so first access it by read and aftger that we use str func replce so replce it
print(newdata)
word="learning"
with open("practice.txt","r") as f:
    data=f.read()
    if(data.find(word)!=-1):
        print("word is found in the file. at the : ",word,data.find(word))
    else:
        print("word is not found in the file.")"""
#bapp coder
"""def check_for_line(word):
    data=True
    line_no=1
    with open("practice.txt","r") as f:
        while(data):
            data=f.readline()
            if(word in data):
                print(line_no)
                return
            line_no+=1
            
        return -1
    
word=input("enter word : ")
check_for_line(word)"""
#...............................................................................
"""with open("D:\Coding\Python\conut.txt","r") as func:
    data=func.read()
    print(data)
    num=""
    for i in range(len(data)):
        if(data[i]==","):
            print(int(num))
            num=""
        else:
            num+=data[i]"""
#.............................................................................
            

with open("D:\Coding\Python\conut.txt","r") as f:
    data=f.read()
    count=0
    nums=data.split(",")
    for val in nums:
        if(int(val)%2==0):
            count+=1
            
print(count)
    




















