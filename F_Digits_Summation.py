inp = input()
numbers = inp.split()
x = int(numbers[0])
y = int(numbers[1])
last_digit_x = x%10
last_digit_y = y%10
print(last_digit_x+last_digit_y)

