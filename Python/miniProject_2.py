import random
n=random.randint(1,100)
num=-1
guesses=0
while(num!=n):
    guesses+=1
    num=int(input("Guess the number : "))
    if(num>n):
        print("Lower number please")
    else:
        print("Higher number please")
        
print(f"you have guessesed the number correctly in {guesses} attempt")
print(f"Your percentage is : {(1/guesses)*100}")

