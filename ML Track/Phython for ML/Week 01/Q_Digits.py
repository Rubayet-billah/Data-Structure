tc = int(input())
for i in range(tc):
    number = int(input())
    while number > 0:
        digit = int(number%10)
        print(digit)
        number=number/10;
    