t = int(input())

for i in range(0, t):
    n = int(input())

    s_list = []
    l_list = []

    for j in range(0, n):
        a, b = input().split()
        s_list.append(a)
        l_list.append(int(b))

    ans = l_list.index(max(l_list))
    print(s_list[ans])