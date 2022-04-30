# can make a new user

# stores :- name, current amount, password

# transactions := withdraw money, deposit money

d = {}

t=0
while(t==0):
    print("** WELCOME! ** \n 1. Make a new user \n 2. make a transaction")
    print("3. Delete a user \n4. Display the details \n5.exit")
    n = int(input("Enter your choice: "))
    if n==1:
        name = input("Enter name: ")
        if name in d:
            print("you are a donkey")
            t=1
            break
        pswd = input("Enter password: ")
        sa = int(input("Enter starting amount: "))
        d[name] = [pswd,sa]

    elif n == 2:
        print("enter the name and password of the user")
        user = input()
        pas = input()

        if(user not in d or pas != d[user][0]):
            print("you are an idiot")
            t=1
            break
        print("1. Deposit \n2. Withdraw ")
        m = int(input("Enter choice: "))

        if(m == 1):
            y = int(input("enter the amount to deposit"))
            d[user][1] += y
        elif(m==2):
            y = int(input("enter the amount to withdraw"))
            if(d[user][1] < y):
                print("the amount is not present")
                t =1
                break
            else:
                d[user][1] -= y

    elif(n==3):
        print("enter the name and password of the user")
        user = input()
        pas = input()

        if(user not in d or pas != d[user][0]):
            print("you are a fraud")
            t=1
            break
        
        del d[user]

    elif(n==4):
        print("enter the name and password of the user")
        user = input()
        pas = input()

        if(user not in d or pas != d[user][0]):
            print("you are a fraud")
            t=1
            break
        
        print(f'the amount {user} has currently is {d[user][1]}')

    elif n == 5:
        t=1
        break








