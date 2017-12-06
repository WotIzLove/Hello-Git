#import math
from math import sin, acosh, pi

print("Formula 1. G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2)\n") #печатает формулы G ,F, Y
print("Formula 2. F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2));\n ")
print("Formula 3. Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1);\n ")
n = int(input("Enter Formula:")) #Выбираем формулу для подсчёта
while (n>1 or n<3):
    a = int(input("Enter а: ")) #Вводим a
    print("Set the boundaries of the change х.")  # Вводим границу изменения x
    min_x = int(input("from: "))
    max_x = int(input("to: "))
    s = int(input("Enter the number of steps: "))  # Вводим количество шагов
    if n == 1: #Если выбрали формулу 1
        x = min_x
        G_values = []
        while x <= max_x:
            G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2) #Считаем формулу G
            print("x = %lf\tG = %lf" % (x, G)) #Выводим G
            x += (max_x - min_x) / (s - 1)  #Делаем шаг
            G_values.append(G)
            print("x = %.3f\tG = %.3f" % (x, G))
            x += (max_x - min_x) / (s - 1)
        print("\n\nМин. значение G = %.3lf" % min(G_values))
        print("Макс. значение G = %.3lf" % max(G_values))

    elif n == 2: #Если выбрали формулу 1
        x = min_x
        F_values = []
        while x <= max_x:
            F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2)) #Считаем формулу F
            print("x = %lf\tF = %lf" % (x, F)) #Выводим F
            x += (max_x - min_x) / (s - 1) #Делаем шаг
            F_values.append(F)
            print("x = %.3d\tF= %3.f" %(x, F))
        print("\n\nМин. значение F = %.3lf" % min(F_values))
        print("Макс. значение F = %.3lf" % max(F_values))


    elif n == 3:
        x = min_x
        Y_values = []
        if x < -1: #если значение выражения удовлетворяет области определения
            while x <= max_x:
                    Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1) #Считаем формулу Y
                    print("x = %lf\tY = %lf" % (x, Y)) #Выводим Y
                    x += (max_x - min_x) / (s - 1) #Делаем шаг
                    Y_values.append(Y)
                    print(("x = %.3d\tF= %3.f" %(x, Y)))
            print("\n\nМин. значение F = %.3lf" % min(Y_values))
            print("Макс. значение F = %.3lf" % max(Y_values))
        else: # если нет
            print("Try again")

