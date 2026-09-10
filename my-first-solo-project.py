name = input("Enter your full name : ") 
code_secret = int(input("Enter the access code : "))
code = 21 
if code_secret != code : 
   print("incorrect code ! ")
   code_secret = int(input("enter the access code :")) 
   if code_secret != code : 
       print("incorrect code ! ") 
       code_secret = int(input("enter the access code : ")) 
   if code_secret != code : 
       print("you have made 3 attempts ! please comme back tomorrow") 
    
if code_secret == code : 
    print(f"accès authorized, welcome {name}") 
    ()
    print("you progress at level 2 ")

    print("your next mission : finding the mysterious digit ") 
    import random 
    n = 5
    digit = int(input ("enter a digit between 1 and 9 : "))  
    if digit == n : 
        print("horray ! well done ! ")
    else : 
        if digit != n :
            print("Nope ! Try once again ") 
            digit = int(input("enter the chosen digit : ")) 
        if digit != n : 
            print("No ! Try again ! ")
            digit = int(input("enter the chosen digit : "))
        if digit != n : 
            print("Nope ! Try one last time ") 
            digit = int(input("enter the digit : ")) 
        if digit != n : 
            print("we are sorry, but the game ends for you ! thank you for your participation") 
        else : 
            print("bravo ! you've got it ! ")
