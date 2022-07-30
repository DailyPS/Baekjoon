n = int(input())

for i in range(0, n):
    p = int(input())

    cost = []
    name = []

    for j in range(0, p):
        a, b = input().split()
        cost.append(int(a))
        name.append(b)

    ans = cost.index(max(cost))
    print(name[ans])
