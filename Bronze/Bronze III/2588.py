a = int(input())
b = int(input())
c = b
print(a * (c % 10))
c = c // 10
print(a * (c % 10))
c = c // 10
print(a * c)
print(a * b)