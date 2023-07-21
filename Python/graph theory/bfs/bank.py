<<<<<<< HEAD
def display_main_menu():
    print('''
            * WELCOME *
    1. Signup for new users
    2. Login
    3. Exit

    ''')
    ch = int(input("Enter your choice: "))
    
    if ch == 1:
        signup()
    elif ch == 2:
        login_menu()
    elif ch == 3:
        pass

d = {}

def signup():
    name = input("\nEnter you name: ")
    pswd = input("Enter password: ")
    confirm = input("Enter password again for confirmation: ")
    if pswd == confirm:
        print("To activate your account deposit some opening balance..")
        balance = int(input("Enter opening balance: "))
        d[name] = [pswd, balance]  
        print("\n \tAccount created successfully!")
        print("\tRedirecting to main menu...")
        display_main_menu()      
    else:
        print("\n\tPasswords didnt match redirecting to main menu...")
        display_main_menu()


def login_menu():
    user = input("Enter name: ")
    pas = input("Enter password: ")
    
    if user not in d or pas != d[user][0]:
        print("\n\tUser name or pswd incorrect!")
        print("\tRedirecting to main menu...")
        display_main_menu()

    else:
        login(user)

def login(user):   

    print('''
    1. Make a transaction
    2. View user details
    3. Delete user
    4. logout
    ''')       
    n = int(input("Enter your choice: "))
    if n == 1:
        print('''
        1. Deposit
        2. Withdraw
        ''')
        m = int(input("Enter you choice: "))
        if m == 1:
            y = int(input("Enter amount to deposit: "))
            d[user][1] += y
            print(f'\n\t {y} rupees added to your account successfully!')
            login(user)
        elif m == 2:
            x = int(input("Enter amount to withdraw: "))
            if d[user][1] < x:
                print("\n\tNot enough balance! :( ")
                login(user)
            else:
                d[user][1] -= x
                print(f'\n\t {x} rupees deducted from your account!')
                login(user)
    
    elif n == 2:
        print("Name: ", user)
        print("Current account balance: ", d[user][1])
        login(user)
    elif n == 3:
        c = input("\n\tAre you sure you want to delete your account? (y/n): ")
        if c == 'y' or c == 'Y':
            del d[user]
            display_main_menu()
        else:
            login(user)
    elif n == 4:
        print("\n\tlogging out.1..")
        display_main_menu()


display_main_menu()
=======
def display_main_menu():
    print('''
            * WELCOME *
    1. Signup for new users
    2. Login
    3. Exit

    ''')
    ch = int(input("Enter your choice: "))
    
    if ch == 1:
        signup()
    elif ch == 2:
        login_menu()
    elif ch == 3:
        pass

d = {}

def signup():
    name = input("\nEnter you name: ")
    pswd = input("Enter password: ")
    confirm = input("Enter password again for confirmation: ")
    if pswd == confirm:
        print("To activate your account deposit some opening balance..")
        balance = int(input("Enter opening balance: "))
        d[name] = [pswd, balance]  
        print("\n \tAccount created successfully!")
        print("\tRedirecting to main menu...")
        display_main_menu()      
    else:
        print("\n\tPasswords didnt match redirecting to main menu...")
        display_main_menu()


def login_menu():
    user = input("Enter name: ")
    pas = input("Enter password: ")
    
    if user not in d or pas != d[user][0]:
        print("\n\tUser name or pswd incorrect!")
        print("\tRedirecting to main menu...")
        display_main_menu()

    else:
        login(user)

def login(user):   

    print('''
    1. Make a transaction
    2. View user details
    3. Delete user
    4. logout
    ''')       
    n = int(input("Enter your choice: "))
    if n == 1:
        print('''
        1. Deposit
        2. Withdraw
        ''')
        m = int(input("Enter you choice: "))
        if m == 1:
            y = int(input("Enter amount to deposit: "))
            d[user][1] += y
            print(f'\n\t {y} rupees added to your account successfully!')
            login(user)
        elif m == 2:
            x = int(input("Enter amount to withdraw: "))
            if d[user][1] < x:
                print("\n\tNot enough balance! :( ")
                login(user)
            else:
                d[user][1] -= x
                print(f'\n\t {x} rupees deducted from your account!')
                login(user)
    
    elif n == 2:
        print("Name: ", user)
        print("Current account balance: ", d[user][1])
        login(user)
    elif n == 3:
        c = input("\n\tAre you sure you want to delete your account? (y/n): ")
        if c == 'y' or c == 'Y':
            del d[user]
            display_main_menu()
        else:
            login(user)
    elif n == 4:
        print("\n\tlogging out.1..")
        display_main_menu()


display_main_menu()
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
