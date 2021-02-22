a = input()
b = input()

a = '0b' + a
b = '0b' + b

a = int(a, 2)
b = int(b, 2)

answer = a * b
answer = format(answer, 'b')

print(answer)