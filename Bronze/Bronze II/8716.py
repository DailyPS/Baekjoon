x1, y1, x2, y2 = input().split()
x3, y3, x4, y4 = input().split()

x1 = int(x1)
y1 = int(y1)
x2 = int(x2)
y2 = int(y2)
x3 = int(x3)
y3 = int(y3)
x4 = int(x4)
y4 = int(y4)

if x2 < x3 or x4 < x1 or y3 < y2 or y1 < y4:
    print(0)

else:
    sx = max(x1, x3)
    sy = min(y1, y3)
    ex = min(x2, x4)
    ey = max(y2, y4)

    ansx = ex - sx
    ansy = ey - sy

    print(abs(ansx * ansy))