"""info={
    "key":"value",
    "name":"neev mendpara",
    "age":17,
    "learning":"python",
    "cgpa":8.4,
    "language":["python","c++","java","javascript"],
    13.92:91.6
}
print(info)
print(type(info))
# accessing values from dictionary
print(info["key"])
print(info["age"])
info["learning"]="C language"
print(info)
info["institute"]="IIIT VADODARA"
print(info)
null_dict={}
print(null_dict)
null_dict["name"]="godzilla"
print(null_dict)"""
#.............................................................................
#nested dictionary
"""student={
    "name":"neev mendpara",
    "age":17,
    "cgpa":8.4,
    "sub":["ph","ec","ma","it"],
    "marks":{
        "ph":90,
        "ec":85,
        "ma":92,
        "it":88
    }
}
# accessing values from nested dictionary
print(student["marks"]["ph"])
print(student)
print(student["marks"])"""
#.....................................................................
#methods in dictinonary
"""student={
    "name":"neev mendpara",
    "age":17,
    "cgpa":8.4,
    "sub":["ph","ec","ma","it"],
    "marks":{
        "ph":90,
        "ec":85,
        "ma":92,
        "it":88
    }
}
print(student.keys())
print(student.values())
print(list(student.keys()))
print(len(student))
print(student.items())
print(list(student.items()))
pairs=list(student.items())
print(pairs[1])
print(pairs[4])
print(student["name"])
print(student.get("name"))#same as work#here if name2 and this not exist so it give none but 
#but upper simple method in give error
#..if our program is right but beffore this if we have anyone error so right program not excute 
student.update({"city":"surat"})
print(student)
new_dict={"area":"motavarachha","buliding":"silvassa stone"}
student.update(new_dict)
print(student)
new_dict={"area":"varachha"}
student.update(new_dict)
print(student)#in the dictionary not exist duplicate keys so this cahnge it otherwise update with new key as per value"""
#..........................................................................
#set in python here mutable things like list and dict is not allow in set 
"""collection={1,2,3,4}
print(collection)
print(type(collection))
collection={1,2,3,3,41,"hello","neev","mendapra",17}
print(collection)#radom arragment not input wise 
#in set duplicate value is not allow so set remove duplicate and give with any repeating within it
null_set=set()#empty set
print(type(null_set))
#set is mutable but their elements also mutable 
collection=set()
collection.add(1)
collection.add(2)
print(collection)
collection.remove(1)
print(collection)
# collection.remove(7)
# print(collection)this give error
collection.add((1,43,2,3))
print(collection)
# collection.add([1,21,22,32])
# print(collection)this is unhashable type so this is not allowed
#immutable:->hash vlue:hashable
#mutable:->hash value:unhashable
print(len(collection))
collection.clear()
print(len(collection))
collection={"hello","my name is","neev mendpara","age : 17"}
print(collection.pop())#any random elemnts is poped
set1={1,2,3,4}
set2={2,42,23}
print(set1.union(set2))
print(set1)#show that
print(set1.intersection(set2))"""
#.....................................................................
"""dicto={
    "cat":"a small animal",
    "table":["a peice of furniture","List of facts & figures"]
}
print(dicto)
subjects={"python","java","C++","python","js","java","python","java","C++","C"}
print(subjects)
print("number of required classroom : ",len(subjects))"""
#......................................................................
"""marks={}
x=int(input("enter ph marks : "))
marks.update({"ph":x})
y=int(input("enter maths marks : "))
marks.update({"ma":y})
z=int(input("enter the Ec mark : "))
marks.update({"ec":z})
print(marks)"""
#..............................................................
val={9,9.0,8.25}
print(val) #set is unordered collection of unique elements
val={
    ("float",9.0),
    ("int",9)
}
print(val) 







