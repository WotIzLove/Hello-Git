#include <stdio.h> // Импортируем библиотеки
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *file;
    double x, a, G, F, Y, pi, min, max, d, min_i, max_i; // Объявляем переменные
    int n = 1, s, i, counter = 0;
    double array[100]; // Объявляем массив
    pi = 3.14;
    char file_pos[100] = "Values.txt";
    struct str {
        double values;
    };
    struct str data[100];

    char result[400] = {0}, a_s[100], min_s[100], max_s[100], s_s[100], *temp, template[100], qwe[100];
    while (n != 0) {
        printf("Formula №1 G = 3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(a, 2)) / (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)\n"); // Выводим на экран формулы
        printf("Formula №2 F = 1 / sin(40 * pow(a, 2) + 9 * a * x - 20 * pow(x, 2) - pi / 2)\n");
        printf("Formula №3 Y = -acosh(pow(a, 2) - 6 * a * x + 5 * pow(x, 2) + 1);\n");
        printf("Enter 0 to quit or 1 to continue.\n");
        scanf("%i", &n);
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

        file = fopen(file_pos, "w+");
        fseek(file,0,SEEK_SET);
        for (x = min, i = 0; x <= max; x += (max - min) / (s - 1), i++) {   // Делаем шаг
            d = (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2));  // Проверяем равен ли знаменатель нулю
            if (d == 0)
                printf("error");
            G = 3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(a, 2)) / d;
            data[i].values = G;  // Добавляем значение G в массив
            printf("x = %lf\t", x);
            fprintf(file, "%lf\n", data[i].values);
            printf("G = %lf\n", G);
            sprintf(qwe, "%lf", data[i].values);
            strcat(result, qwe);
            fopen(file_pos, "r");
            fscanf(file, "%f", &data[i].values);
        }

        printf("**********************************\n\n");

        file = fopen(file_pos, "a+");
        fseek(file,0,SEEK_SET);
        for (x = min, i = 0; x <= max; x += (max - min) / (s - 1), i++) {
            d = (sin(40 * pow(a, 2) + 9 * a * x - 20 * pow(x, 2) - pi / 2));
            if (d == 0)
                printf("Error");
            F = 1 / d;
            data[i].values = F;
            fprintf(file, "%lf\n", data[i].values);
            sprintf(qwe, "%lf", data[i].values);
            strcat(result, qwe);
            fopen(file_pos, "r");
            fscanf(file, "%f", &data[i].values);
            printf("x = %lf", x);
            printf("\tF = %lf\n", data[i].values);
        }
        printf("**********************************\n\n");

        file = fopen(file_pos, "a+");
        fseek(file,0,SEEK_SET);
        for (x = min, i = 0; x <= max; x += (max - min) / (s - 1), i++) {
            if (x > -1) {
                printf("erO00000R");
                break;
            }
            Y = -acosh(pow(a, 2) - 6 * a * x + 5 * pow(x, 2) + 1);
            data[i].values = Y;
            printf("x = %lf\t", x);
            fprintf(file, "%lf\n", data[i].values);
            printf("Y = %lf\n", Y);
            sprintf(qwe, "%lf", data[i].values);
            strcat(result, qwe);
            fopen(file_pos, "r");
            fscanf(file, "%f", &data[i].values);
        }

        min_i = data[0].values;   // Находим максимальный и минимальный эллементы массива
        for (i = 0; i < s; i++)
            if (data[i].values < min_i)
                min_i = data[i].values;

        max_i = data[0].values;
        for (i = 0; i < s; i++)
            if (data[i].values > max_i)
                max_i = data[i].values;

        printf("\n\nМин. значение = %.3lf\n", min_i); //Выводим максимальный и минимальный эллементы массива
        printf("Макс. значение = %.3lf\n", max_i);

        printf("Результат: %s\n", result);
        printf("\nВведите шаблон: ");
        scanf("%s", template);
        temp = strstr(result, template);
        while (temp) {
            sprintf(result, temp + 1); //Обрезаем строку
            counter++; //Увеличиваем счетчик вхождений
            temp = strstr(result, template); //Получаем новое вхождение
        }

        printf("Кол-во совпадений: %d.\n", counter);
        fclose(file);


        return 0;

    }
}