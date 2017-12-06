v =int(input())
t =int(input())

if v*t > 0:
     print(0 + ( v* t) % 109)
if v*t < 0:
     print((109 + ((v * t) % 109)) % 109)