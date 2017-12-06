s = input()

n = s.find(' ')
a = s[0:n]
b = s[n:len(s)]
print(b + ' ' + a)