#include <stdio.h> //// Импортируем библиотеки
#include <math.h>

int main() {
        double x, a, G, F, Y, i, pi, min, max, d; // Объявляем переменные
        int n = 1,s;
        while (n!=0) {
            printf("Formula №1 G = 3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(a, 2)) / (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)\n"); // Выводим на экран формулы
            printf("Formula №2 F = 1 / sin(40 * pow(a, 2) + 9 * a * x - 20 * pow(x, 2) - pi / 2)\n ");
            printf("Formula №3 Y = -acosh(pow(a, 2) - 6 * a * x + 5 * pow(x, 2) + 1);\n ");
            printf("Enter 0 to quit.\n");
            printf("Выберите формулу для решения:"); // вводим n
            scanf("%d", &n);
            if (n == 0) //Если пользователь вводит 0, то цикл завершается
                break;
            printf("Введите min x;\n"); //Вводим минимальное и максимально значение x
            scanf("%lf", &min);
            printf("Введите max x;\n");
            scanf("%lf", &max);
            printf("Enter a:"); //Вводим a
            scanf("%lf", &a);
            printf("Введите число шагов:"); //Вводим число шагов (s)
            scanf("%d", &s);
                switch (n) {    // осуществляем выбор формулы
                    case 1: {   // если пользователь выбрал первую формулу
                        for (x = min; x <= max; x += (max - min) / (s - 1)) { // Делаем шаг
                            d = (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)); // Проверяем равен ли знаменатель нулю
                            if (d == 0)
                                printf ("error");
                            G = 3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(a, 2)) / d; // Вычесляем значение G
                            printf("%lf\n", G); // Выводи G
                        }
                        break;
                    }
                    case 2: {   // если пользователь выбрал вторую формулу
                        for (x = min; x <= max; x += (max - min) / (s - 1)) { // Делаем шаг
                            d = (sin(40 * pow(a, 2) + 9 * a * x - 20 * pow(x, 2) - pi / 2)); // Проверяем равен ли знаменатель нулю
                            if (d == 0)
                                printf ("Error");
                            F = 1 / d;
                            printf("%lf\n", F);
                        }
                        break;
                    }
                    case 3: {   // если пользователь выбрал третью формулу
                        for (x = min; x <= max; x += (max - min) / (s - 1)) {   // Делаем шаг
                            if (x > -1) {   // Если значение x не удовлетворяет области определения arcosh
                                printf("erO00000R");    // сообщение об ошибке
                                return 0;
                            }
                            Y = -acosh(pow(a, 2) - 6 * a * x + 5 * pow(x, 2) + 1);
                            printf("%lf\n", Y);
                        }
                        break;
                    }
                    default: {  // Если ни одно значение блоков case не совпадет, с тем значением, что принял switch()
                        printf("Erooor");
                    }

                }
            }
        return 0;
    }