#import math
from math import sin, acosh, pi

print("Formula 1. G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2)\n") #print formula G ,F, Y
print("Formula 2. F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2));\n ")
print("Formula 3. Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1);\n ")
n = int(input('Enter Formula:')) #choose formula

if n == 1: # if we choose formula 1
    a = int(input('Enter a: '))  #enter a, x
    x = int(input('Enter x: '))
    G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2) #solutions of equation G
    print ('A={},X={},G={}'. format(a,x,G)) #print G
elif n == 2: # if we choose formula 2
    a = int(input('Enter a: '))
    x = int(input('Enter x: '))
    F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2)) #solutions of equation F
    print ('A={},X={},F={}'). format(a,x,F) # print F
elif n == 3: # if we choose formula 3
    a = int(input('Enter a: '))
    x = int(input('Enter x: '))
    if x<-1: #if value enters into the domain of definition
        Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1) #solutions of equation Y
        print ('A={}, X={},Y={}').format(a, x, Y)
    else: # if not
        print("Try again")

if (n<1) or (n>3):
    print ('Try again')
