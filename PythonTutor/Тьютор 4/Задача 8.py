multi = 1
sum = 0
n = int(input())
for i in range(1, n+1):
    multi *= i
    sum += multi
print(sum)