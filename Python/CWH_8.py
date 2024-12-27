#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
# import random

# def game():
#     print("You are playing the game.")
#     score = random.randint(1, 62)
    
#     try:
#         # Try to read the high score from the file
#         with open("D:\\Coding\\Python\\hiscore.txt", "r") as f:
#             hiscore = f.read()
#             # If the file is empty, set hiscore to 0
#             hiscore = int(hiscore) if hiscore.strip() else 0
#     except FileNotFoundError:
#         # If the file doesn't exist, initialize hiscore to 0
#         hiscore = 0
    
#     print(f"Your score: {score}")
#     print(f"High score: {hiscore}")
    
#     if score > hiscore:
#         print("Congratulations! You've set a new high score!")
#         with open("D:\\Coding\\Python\\hiscore.txt", "w") as f:
#             f.write(str(score))
    
#     return score

# game()
#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
# """def generateTable(n):
#     table=""
#     for i in range(1,11):
#         table+=f"{n}X{i}={n*i}\n"
        
#     with open(f"D:\Coding\Python\tables.txt/table_{n}.txt","w") as f:
#         f.write(table)

# for i in range(2,21):
#     generateTable(i)"""
#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
n=int(input("enter a number : "))

table=[n*i for i in range(1,11)]
with open("D:\Coding\Python\\tables.txt","w") as f:
    f.write(f"Table of {n}:{str(table)}\n")