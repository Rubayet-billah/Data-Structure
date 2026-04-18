inp = input()

numbers = inp.split()
x=int(numbers[0])
y=int(numbers[1])
z=int(numbers[2])

min =x
max=x

if(y<min):
    min=y
if(z<min):  
    min=z
if(y>max):
    max=y   
if(z>max):
    max=z
print(min, max)
