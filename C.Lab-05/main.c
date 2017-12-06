#include <stdio.h> // Импортируем библиотеки
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    double x, a, G, F, Y, pi, min, max, d, min_i, max_i; // Объявляем переменные
    int n = 1, s, i, counter = 0;
    double array[100]; // Объявляем массив
    pi = 3.14;
    char result[400] = {0}, a_s[100], min_s[100], max_s[100], s_s[100], *temp, template[100], qwe[100];
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
        scanf("%s", &min_s);
        printf("Введите max x;\n");
        scanf("%s", &max_s);
        printf("Enter a:");
        scanf("%s", &a_s);   //Вводим a

        a = atof(a_s);
        min = atof(min_s);
        max = atof(max_s);

        printf("Введите число шагов:");
        scanf("%s", &s_s);//Вводим число шагов (s)
        s = atof(s_s);
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
                    sprintf(qwe,"%lf",array[i]);
                    strcat(result,qwe);
                }

                break;

            case 2:
                for (x = min, i = 0; x <= max; x += (max - min) / (s - 1), i++) {
                    d = (sin(40 * pow(a, 2) + 9 * a * x - 20 * pow(x, 2) - pi / 2));
                    if (d == 0)
                        printf("Error");
                    F = 1 / d;
                    array[i] = F;
                    printf("%lf\t", x);
                    printf("%lf\n", F);
                    sprintf(qwe,"%lf",array[i]);
                    strcat(result,qwe);
                }

                break;

            case 3:
                for (x = min, i = 0; x <= max; x += (max - min) / (s - 1), i++) {
                    if (x > -1) {
                        printf("erO00000R");
                        return 0;
                    }
                    Y = -acosh(pow(a, 2) - 6 * a * x + 5 * pow(x, 2) + 1);
                    array[i] = Y;
                    printf("%lf\t", x);
                    printf("%lf\n", Y);
                    sprintf(qwe,"%lf",array[i]);
                    strcat(result,qwe);

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

        printf("Результат: %s\n", result);
        printf("\nВведите шаблон: ");
        scanf("%s", template);
        temp = strstr(result, template);
        while (temp) {
            sprintf(result, temp + 1); //Обрезаем строку
            counter++; //Увеличиваем счетчик
            temp = strstr(result, template); //Получаем новое вхождение
        }

        printf("Кол-во совпадений: %d.\n", counter);


    }
            return 0;

}