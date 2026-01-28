a = input()
stra = str(a)
counter = 0
for i in range(0,len(stra)):
    if (stra[i]== '0'):
        counter += 1
        
        
print (counter)