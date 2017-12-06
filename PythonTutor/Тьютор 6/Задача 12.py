a = int(input())
Max1 = a
Max2 = a
while a != 0:
    if a> Max1:
        Max2 = Max1
        Max1 = a
    a = int(input())
print(Max2)