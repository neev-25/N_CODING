import random
name=input("Enter Your Name : ")
print("Welcome",name,"to the game of Rock Paper Scissors")
#print("1    :for rock\n-1   :for paper\n0   :for scissor")
print("Your choices:\t's' for Scissor\t'r' for Rock\t'p' for Paper")
knowdict = {1: "rock", -1: "paper", 0: "scissor"}
counts=0
county=0
countt=1
while(countt<=5):
    countt+=1
    system = random.choice([-1, 0, 1])
    youchoose = input("Enter your choice: ")
    if(youchoose not in ['s', 'r', 'p']):
        print("Invalid choice. Please enter 's' for Scissor, 'r' for Rock,'p' for Paper")
        countt-=1
        continue
    Dict = {"r": 1, "p": -1, "s": 0}
    you = Dict[youchoose]
    print(f"You chose : {knowdict[you]}  \t  system chose : {knowdict[system]}")
    if(system == you):
        counts+=0
        county+=0
    else:
        if(system == 1 and you == 0): 
            counts+=1
           
        elif(system ==0 and you ==1 ):
            county+=1
        
        elif(system == 0 and you == -1):
            counts+=1
         
        elif(system== -1 and you == 0):
            county+=1
        
        elif(system == 1 and you == -1):
            county+=1
        
        elif(system == -1 and you == 1):
            counts+=1
       
if(county>counts):
    print("You win")
elif(counts>county):
    print("Opposite win")
else:
    print("It's a tie")
            