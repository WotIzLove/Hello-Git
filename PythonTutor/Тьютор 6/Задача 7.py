x = int(input())
sum = 0
i = 0

while x != 0:
    sum += x
    x = int(input())
    i += 1
print(sum / i)