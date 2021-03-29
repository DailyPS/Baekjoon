for i in range(3):
    ans = 0
    n = int(input())
    for i in range(n):
        d = int(input())
        ans += d
        #print("Here : " + str(ans))

    if ans > 0:
        print("+")
    
    elif ans < 0:
        print("-")
    
    else:
        print("0") 