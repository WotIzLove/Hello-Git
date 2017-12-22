from math import sin, acosh, pi

print("Formula 1. G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2)\n") #печатает формулы G ,F, Y
print("Formula 2. F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2));\n ")
print("Formula 3. Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1);\n ")

while True:
    Final_results = []
    a = int(input("Enter а: ")) #Вводим a
    print("Set the boundaries of the change х.")  # Вводим границу изменения x
    min_x = input("from: ")
    max_x = input("to: ")
    s = input("Enter the number of steps: ")# Вводим количество шагов
    min_x = float(min_x)
    max_x = float(max_x)
    result = ""
    s = int(s)
    i = 0
    j = 0
    z = 0

    x = min_x
    G_values = []
    mass_one = []
    while x <= max_x:
            G = 3 * (-3 * a ** 2 + 2 * a * x + 21 * x ** 2)/(35 * a ** 2 + 37 * a * x + 6 * x ** 2) #Считаем формулу G
            print("x = %lf\tG = %lf" % (x, G)) #Выводим G
            x += (max_x - min_x) / (s - 1)  #Делаем шаг
            results = {'G': G}
            mass_one.append(results)
            G_values.append(G)
            Final_results.append(G)
            result += str(G)
            print("x = %.3f\t G = %.3f" % (x, mass_one[j]['G']))
            j += 1
    print("\n\nМин. значение G = %.3f" % min(G_values))
    print("Макс. значение G = %.3f" % max(G_values))

    x = min_x
    F_values = []
    mass_two = []
    while x <= max_x:
            F = 1 /(sin(20 * a ** 2 + 9 * a * x - 20 * x ** 2 - 1 * pi / 2)) #Считаем формулу F
            print("x = %lf\tF = %lf" % (x, F)) #Выводим F
            x += (max_x - min_x) / (s - 1) #Делаем шаг
            results = {'F': F}
            F_values.append(F)
            result += str(F)
            mass_two.append(results)
            Final_results.append(F)
            print("x = %.3d\t F= %3.f" %(x, mass_two[z]['F']))
            z += 1
    print("\n\nМин. значение F = %.3f" % min(F_values))
    print("Макс. значение F = %.3f" % max(F_values))


    x = min_x
    Y_values = []
    mass_three = []
    if x < -1: #если значение выражения удовлетворяет области определения
            while x <= max_x:
                    Y = - acosh(a ** 2 - 6 * a * x - 5 * x ** 2 + 1) #Считаем формулу Y
                    print("x = %lf\tY = %lf" % (x, Y)) #Выводим Y
                    x += (max_x - min_x) / (s - 1) #Делаем шаг
                    results = {'Y': Y}
                    Y_values.append(Y)
                    mass_three.append(results)
                    Final_results.append(Y)
                    result += str(Y)
                    print(("x = %.3d\tY= %3.f" %(x, mass_three[i]['Y'])))
                    i += 1
    print("\n\nМин. значение Y = %.3f" % min(Y_values))
    print("Макс. значение Y = %.3f" % max(Y_values))



    print("Результирующая строка: %s" % result)

    print("\nФин. мин. значение =", min(Final_results))
    print("Фин. макс. значение =", max(Final_results))

    template = input("Введите шаблон: ")
    counter = result.count(template)  # Считаем количество совпадений
    print("Совпадений: %d." % counter)
