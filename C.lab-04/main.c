#include <stdio.h> // Импортируем библиотеки
#include <math.h>


int main() {
    double x, a, G, F, Y, pi, min, max, d, min_i, max_i; // Объявляем переменные
    int n = 1, s, i;
    double array[100]; // Объявляем массив
    pi = 3.14;
    while (n != 0) {
        printf("Formula №1 G = 3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(a, 2)) / (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)\n"); // Выводим на экран формулы
        printf("Formula №2 F = 1 / sin(40 * pow(a, 2) + 9 * a * x - 20 * pow(x, 2) - pi / 2)\n");
        printf("Formula №3 Y = -acosh(pow(a, 2) - 6 * a * x + 5 * pow(x, 2) + 1);\n");
        printf("Enter 0 to quit.\n");
        printf("Выберите формулу для решения:");    // Вводим n
        scanf("%d", &n);
        if (n == 0) // Если пользователь вводит 0, то цикл завершается
            break;
        printf("Введите min x;\n");     //Вводим минимальное и максимально значение x
        scanf("%lf", &min);
        printf("Введите max x;\n");
        scanf("%lf", &max);
        printf("Enter a:");
        scanf("%lf", &a);   //Вводим a
        printf("Введите число шагов:");
        scanf("%d", &s);//Вводим число шагов (s)
        if (s > 100) {
            printf("erO00000R");
            break;

        };
        switch (n) {    // осуществляем выбор формулы
            case 1:
                for (x = min, i = 0; x <= max; x += (max - min) / (s - 1), i++) {   // Делаем шаг
                    d = (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2));  // Проверяем равен ли знаменатель нулю
                    if (d == 0)
                        printf("error");
                    G = 3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(a, 2)) / d;
                    array[i] = G;   // Добавляем значение G в массив
                    printf("%lf\t", x);
                    printf("%lf\n", G);
                }

                    break;

                    case 2:
                        for (x = min, i = 0; x <= max; x += (max - min) / (s - 1),i++) {
                            d = (sin(40 * pow(a, 2) + 9 * a * x - 20 * pow(x, 2) - pi / 2));
                            if (d == 0)
                                printf("Error");
                            F = 1 / d;
                            array[i] = F;
                            printf("%lf\t", x);
                            printf("%lf\n", F);
                        }

                            break;

                            case 3:
                                for (x = min, i = 0; x <= max; x += (max - min) / (s - 1),i++) {
                                    if (x > -1) {
                                        printf("erO00000R");
                                        return 0;
                                    }
                                    Y = -acosh(pow(a, 2) - 6 * a * x + 5 * pow(x, 2) + 1);
                                    array[i] = Y;
                                    printf("%lf\t", x);
                                    printf("%lf\n", Y);

                                }
                            break;

                            default: {
                                printf("Erooor");
                            }
                        }
        min_i = array[0];   // Находим максимальный и минимальный эллементы массива
        for (i = 0; i < s; i++)
            if (array[i] < min_i)
                min_i = array[i];

        max_i = array[0];
        for (i = 0; i < s; i++)
            if (array[i] > max_i)
                max_i = array[i];

        printf("\n\nМин. значение G = %.3lf\n", min_i); //Выводим максимальный и минимальный эллементы массива
        printf("Макс. значение G = %.3lf\n", max_i);

                }
                    return 0;
                }