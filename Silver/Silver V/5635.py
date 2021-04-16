n = int(input())

info = []

for i in range(0, n):
    a, b, c, d = input().rstrip().split()
    
    if len(b) == 1:
        b = '0' + b

    if len(c) == 1:
        c = '0' + c

    info.append((a, d + c + b))

info.sort(key = lambda x:int(x[1]))
print(info[-1][0])
print(info[0][0])