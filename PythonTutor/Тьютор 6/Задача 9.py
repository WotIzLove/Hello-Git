x = int(input())
i = 0
max_x = 0
while x != 0:
    if x > max_x:
        max_x = x
        i += 1
    x = int(input())
print(i - 1)