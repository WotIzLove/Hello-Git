from math import sin, acosh, pi #import

a = int(input('Enter a: ')) #enter a and x
x = int(input('Enter x: '))

G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2) #solutions of equation G

F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2)) #solutions of equation F

Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1) #solutions of equation Y

print ('G={},F={},Y={}'. format(G,F,Y)) #PrintG, F, Y