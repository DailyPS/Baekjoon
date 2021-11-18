a = int(input())
s = "%.300f" % 2 ** -a
l = len(s)
for i in range(l - 1, 1, -1) :
  if s[i] != '0':
    end = i;
    break
print(s[:end + 1])