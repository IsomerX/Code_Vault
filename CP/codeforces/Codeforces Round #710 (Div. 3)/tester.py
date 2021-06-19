f = open("test.txt", 'w')
f.write("1 \n")
for i in range(1,200002):
    f.write(f'{i}')
    f.write("\n")
f.close()