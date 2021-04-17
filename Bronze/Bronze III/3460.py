t = int(input())

for i in range(0, t):
    num = int(input())
    num_bin = bin(num)
    num_bin = num_bin[2:]
    
    for j in range(len(num_bin) - 1, -1, -1):
        if num_bin[j] == "1":
            print(len(num_bin) - j - 1, end = " ")