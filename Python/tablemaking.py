import pandas as pd
import numpy as np

table = pd.DataFrame({"admin no" : [], "phone no" : [],"names" : []})

admin_number_list = []
for i in range(10000):
    admin_number_list.append(np.random.randint(10000,99999))
table["admin no"] = admin_number_list

phone_number_list = []
for i in range(10000):
    phone_number_list.append(np.random.randint(9000000000,10000000000, dtype = np.int64))
table["phone no"] = phone_number_list

names = ['Henning', 'Belkis', 'Vancamp', 'Alida', 'Luedke', 'Shemika', 'Jost', 'Hannelore', 'Morse', 'Mirta', 'Coil', 'Lorrie', 'Copper', 'Mel', 'Twedt', 'Tyler', 'Cargill', 'Marylin', 'Macha', 'Ludie', 'Staley', 'Sharyl', 'Waldman', 'Nickie', 'Pena', 'Cheryll', 'Stelling', 'Cleopatra', 'Lowrie', 'Nieves', 'Wand', 'Chara', 'Culotta', 'Lisette', 'Tabon', 'Marth', 'Monarrez', 'Veda', 'Brassard', 'Alicia', 'Wanke', 'Katelyn', 'Claudio', 'Kala', 'Walke', 'Barbra', 'Hottinger', 'Wiley', 'Sevin', 'Ardell', 'Boyd', 'Nicole', 'Mcgarrah', 'William', 'Gillam', 'Ardith', 'Wigington', 'Evonne', 'Bozeman', 'Manual', 'Bowker', 'Adelle', 'Yarnall', 'Dawn', 'Mullinax', 'Lynda', 'Badon', 'Willard', 'Redding', 'Savannah', 'Borquez', 'Brook', 'Shuffler', 'Reynaldo', 'Cobian', 'Jae', 'Mook', 'Weston', 'Sitsler', 'Suanne', 'Jolin', 'Elbert', 'Voigt', 'Suzi', 'Rusek', 'Albina', 'Cooke', 'Dedra', 'Spiegel', 'Olevia', 'Milera', 'Jenee', 'Catlin', 'Willia', 'Guinyard', 'Stephania', 'Human', 'Shaunna', 'Fifield', 'Trinh']
names_list = []
for i in range(10000):
    rand_index = np.random.randint(0,len(names)-1)
    names_list.append(names[rand_index])
table["names"] = names_list

print(table.nlargest(10,"admin no"))

# table.to_excel("table.xlsx")