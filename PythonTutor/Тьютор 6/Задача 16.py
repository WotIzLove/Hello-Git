n = int(input())
n1 = n
count = 0
max_count = 0
while n != 0:
    if n == n1:
        count += 1
        if count >= max_count:
            max_count = count
    else:
        if count >= max_count:
            max_count = count
            count = 1
            n1 = n
        else:
            count = 0
            count += 1
            n1 = n
    n = int(input())
print(max_count)