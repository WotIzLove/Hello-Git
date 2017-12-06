n = 0
max = 0
a = int(input())
while a != 0:
    if a > max:
        max = a
        n = 1
    elif a == max:
        n += 1
    a = int(input())
print(n)