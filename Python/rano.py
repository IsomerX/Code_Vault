<<<<<<< HEAD
import tkinter as tk
from tkinter import messagebox
 
def Calculate(entries):
    cal = one_ticket_probability(int(entries['Total Number'].get()),
                                 int(entries['Tickets bought'].get()),
                                 int(entries['Choices given'].get()),
                                 int(entries['total_jokerballs'].get()),
                                 int(entries['Match balls'].get()), v.get())
    messagebox.showinfo(
        "For the selected choices ",
        "\nYou're chances of winning are {:.18f} \nYou're chances of winning are 1 in {}\n"
        .format(cal[0], cal[1]))
 
#We use tkinter to make a window object
root = tk.Tk()
#we make a form for user to give his values
def makeform(root, fields):
    entries = {}
    #These are default values for lotto-india
    default_vals=['50','6','5','6','1']
    for field in fields:
        print(field)
        row = tk.Frame(root)
        lab = tk.Label(row, width=22, text=field + ": ", anchor='w')
        ent = tk.Entry(row)
        ent.insert(0,default_vals[fields.index(field)])
        row.pack(side=tk.TOP, fill=tk.X, padx=5, pady=5)
        lab.pack(side=tk.LEFT)
        ent.pack(side=tk.RIGHT, expand=tk.YES, fill=tk.X)
        entries[field] = ent
    return entries
 
 
fields = [
    'Total Number', 'Choices given', 'total_jokerballs', 'Match balls',
     'Tickets bought'
]
ents = makeform(root, fields)
v = tk.IntVar()
 
tk.Label(root,
         text="Jokeball matches",
         justify=tk.CENTER,
         padx=20).pack()
tk.Radiobutton(root, text="Matches", padx=20, variable=v,
               value=True).pack(anchor=tk.CENTER)
tk.Radiobutton(root, text="Not matches", padx=20, variable=v,
               value=False).pack(anchor=tk.CENTER)
b1 = tk.Button(root, text='Calculate Odds',
           command=(lambda e=ents: Calculate(e)))
b1.pack(side=tk.LEFT, padx=5, pady=5)
b3 = tk.Button(root, text='Quit', command=root.quit)
b3.pack(side=tk.LEFT, padx=5, pady=5)
 
 
 
text2 = tk.Text(root, height=20, width=60)
scroll = tk.Scrollbar(root, command=text2.yview)
text2.configure(yscrollcommand=scroll.set)
text2.tag_configure('bold_italics', font=('Arial', 12, 'bold', 'italic'))
text2.tag_configure('big', font=('Verdana', 20, 'bold'))
text2.tag_configure('color',
                    foreground='#476042',
                    font=('Tempus Sans ITC', 12, 'bold'))
text2.insert(tk.END, '\nLottery Prediction\n', 'big')
quote = """
Total Number : Totals numbers in range from which numbers are to be chosen e.g. for range 1-49, Total number = 50 
Choices given : Number of numbers we can select excluding the joker ball
Total Jokerballs : Total number of jokerballs from which one ball is to be chosen
Match balls: For how many matches you want to calculate probability
Tickets : Number of Tickets bought
Jokerball matches : Keep True if you want to calculate the probability of jokerball matching too
"""
text2.insert(tk.END, quote, 'color')
text2.pack(side=tk.LEFT)
scroll.pack(side=tk.RIGHT, fill=tk.Y)
=======
import tkinter as tk
from tkinter import messagebox
 
def Calculate(entries):
    cal = one_ticket_probability(int(entries['Total Number'].get()),
                                 int(entries['Tickets bought'].get()),
                                 int(entries['Choices given'].get()),
                                 int(entries['total_jokerballs'].get()),
                                 int(entries['Match balls'].get()), v.get())
    messagebox.showinfo(
        "For the selected choices ",
        "\nYou're chances of winning are {:.18f} \nYou're chances of winning are 1 in {}\n"
        .format(cal[0], cal[1]))
 
#We use tkinter to make a window object
root = tk.Tk()
#we make a form for user to give his values
def makeform(root, fields):
    entries = {}
    #These are default values for lotto-india
    default_vals=['50','6','5','6','1']
    for field in fields:
        print(field)
        row = tk.Frame(root)
        lab = tk.Label(row, width=22, text=field + ": ", anchor='w')
        ent = tk.Entry(row)
        ent.insert(0,default_vals[fields.index(field)])
        row.pack(side=tk.TOP, fill=tk.X, padx=5, pady=5)
        lab.pack(side=tk.LEFT)
        ent.pack(side=tk.RIGHT, expand=tk.YES, fill=tk.X)
        entries[field] = ent
    return entries
 
 
fields = [
    'Total Number', 'Choices given', 'total_jokerballs', 'Match balls',
     'Tickets bought'
]
ents = makeform(root, fields)
v = tk.IntVar()
 
tk.Label(root,
         text="Jokeball matches",
         justify=tk.CENTER,
         padx=20).pack()
tk.Radiobutton(root, text="Matches", padx=20, variable=v,
               value=True).pack(anchor=tk.CENTER)
tk.Radiobutton(root, text="Not matches", padx=20, variable=v,
               value=False).pack(anchor=tk.CENTER)
b1 = tk.Button(root, text='Calculate Odds',
           command=(lambda e=ents: Calculate(e)))
b1.pack(side=tk.LEFT, padx=5, pady=5)
b3 = tk.Button(root, text='Quit', command=root.quit)
b3.pack(side=tk.LEFT, padx=5, pady=5)
 
 
 
text2 = tk.Text(root, height=20, width=60)
scroll = tk.Scrollbar(root, command=text2.yview)
text2.configure(yscrollcommand=scroll.set)
text2.tag_configure('bold_italics', font=('Arial', 12, 'bold', 'italic'))
text2.tag_configure('big', font=('Verdana', 20, 'bold'))
text2.tag_configure('color',
                    foreground='#476042',
                    font=('Tempus Sans ITC', 12, 'bold'))
text2.insert(tk.END, '\nLottery Prediction\n', 'big')
quote = """
Total Number : Totals numbers in range from which numbers are to be chosen e.g. for range 1-49, Total number = 50 
Choices given : Number of numbers we can select excluding the joker ball
Total Jokerballs : Total number of jokerballs from which one ball is to be chosen
Match balls: For how many matches you want to calculate probability
Tickets : Number of Tickets bought
Jokerball matches : Keep True if you want to calculate the probability of jokerball matching too
"""
text2.insert(tk.END, quote, 'color')
text2.pack(side=tk.LEFT)
scroll.pack(side=tk.RIGHT, fill=tk.Y)
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
root.mainloop()