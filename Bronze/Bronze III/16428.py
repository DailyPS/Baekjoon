a, b = map(int, input().split())
c, d = divmod(a, b)

if d != 0 and b < 0:
    c = c + 1
    d = d - b

print(c)
print(d)