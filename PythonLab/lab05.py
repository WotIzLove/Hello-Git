from math import sin, acosh, pi

print("Formula 1. G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2)\n") #печатает формулы G ,F, Y
print("Formula 2. F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2));\n ")
print("Formula 3. Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1);\n ")
n = int(input("Enter Formula:"))  #Выбираем формулу для подсчёта
while (n>1 or n<3):
    a = int(input("Enter а: ")) #Вводим a
    print("Set the boundaries of the change х.")  # Вводим границу изменения x
    min_x = input("from: ")
    max_x = input("to: ")
    s = input("Enter the number of steps: ")# Вводим количество шагов
    min_x = float(min_x)
    max_x = float(max_x)
    result = ""
    s = int(s)
    if n == 1: #Если выбрали формулу 1
        x = min_x
        G_values = []
        while x <= max_x:
            G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2) #Считаем формулу G
            print("x = %lf\tG = %lf" % (x, G)) #Выводим G
            x += (max_x - min_x) / (s - 1)  #Делаем шаг
            G_values.append(G)
            result += str(G)
            print("x = %.3f\tG = %.3f" % (x, G))
        print("\n\nМин. значение G = %.3f" % min(G_values))
        print("Макс. значение G = %.3f" % max(G_values))

    elif n == 2: #Если выбрали формулу 1
        x = min_x
        F_values = []
        while x <= max_x:
            F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2)) #Считаем формулу F
            print("x = %lf\tF = %lf" % (x, F)) #Выводим F
            x += (max_x - min_x) / (s - 1) #Делаем шаг
            F_values.append(F)
            result += str(F)
            print("x = %.3d\tF= %3.f" %(x, F))
        print("\n\nМин. значение F = %.3f" % min(F_values))
        print("Макс. значение F = %.3f" % max(F_values))

    elif n == 3:
        x = min_x
        Y_values = []
        if x < -1: #если значение выражения удовлетворяет области определения
            while x <= max_x:
                    Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1) #Считаем формулу Y
                    print("x = %lf\tY = %lf" % (x, Y)) #Выводим Y
                    x += (max_x - min_x) / (s - 1) #Делаем шаг
                    Y_values.append(Y)
                    result += str(Y)
                    print(("x = %.3d\tY= %3.f" %(x, Y)))
            print("\n\nМин. значение Y = %.3f" % min(Y_values))
            print("Макс. значение Y = %.3f" % max(Y_values))

        print("Результирующая строка: %s" % result)

    template = input("Введите шаблон: ")
    counter = result.count(template)  # Считаем количество совпадений
    print("Совпадений: %d." % counter)

else: # если нет
    print("Try again")
