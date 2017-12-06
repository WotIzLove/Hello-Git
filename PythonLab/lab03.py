#import math
from math import sin, acosh, pi

print("Formula 1. G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2)\n") #печатает формулы G ,F, Y
print("Formula 2. F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2));\n ")
print("Formula 3. Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1);\n ")
n = int(input("Enter Formula:")) #Выбираем формулу для подсчёта
while (n!= 0):
    a = int(input("Enter а: ")) #Вводим a
    print("Set the boundaries of the change х.") # Вводим границу изменения x
    min = int(input("from: "))
    max = int(input("to: "))
    s = int(input("Enter the number of steps: ")) #Вводим количество шагов
    if n == 1: #Если выбрали формулу 1
        x = min
        while x <= max:
            G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2) #Считаем формулу G
            print("x = %lf\tG = %lf" % (x, G)) #Выводим G
            x += (max - min) / (s - 1)  #Делаем шаг

    elif n == 2: #Если выбрали формулу 1
        x = min
        while x <= max:
            F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2)) #Считаем формулу F
            print("x = %lf\tF = %lf" % (x, F)) #Выводим F
            x += (max - min) / (s - 1) #Делаем шаг

    elif n == 3:
        x = min
        if x < -1: #если значение выражения удовлетворяет области определения
            while x <= max:
                    Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1) #Считаем формулу Y
                    print("x = %lf\tY = %lf" % (x, Y)) #Выводим Y
                    x += (max - min) / (s - 1) #Делаем шаг
        else: # если нет
            print("Try again")


if (n<1) or (n>3):
    print ("Try again")







