#include <stdio.h>
#include <math.h> // Импортируем библиотеки

int main()
{

    double x, a, G, F, Y, pi; // Объявляем переменные
    int n;

    printf("Формула №1 G = 3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(a, 2)) / (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)\n"); // Выводим на экран формулы
    printf("Формула №2 F = 1 / sin(40 * pow(a, 2) + 9 * a * x - 20 * pow(x, 2) - pi / 2)\n");
    printf("Формула №3 Y = -acosh(pow(a, 2) - 6 * a * x + 5 * pow(x, 2) + 1);\n");
    printf("Выберите формулу для решения:"); // вводим n
    scanf("%d", &n);
    printf("Введите значение x:");  // Вводим x и a
    scanf("%lf",&x);
    printf("Введите значение a:");
    scanf("%lf", &a);

    switch (n) {  // осуществляем выбор формулы
        case 1: // если пользователь выбрал первую формулу
	     d = (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2));
                            if (d == 0)
                                printf ("error");
            G = 3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(a, 2)) / (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)); // Вычесляем G
            printf("G=%lf",G); // Выводим G
            break;
        case 2: // Если пользователь выбрал вторую формулу
            F = 1 / (sin(40 * pow(a, 2) + 9 * a * x - 20 * pow(x, 2) - pi / 2));
            printf("F=%lf",F);
            break;
        case 3: // Если пользователь выбрал третью формулу
            if (x > -1) // Если значение x не удовлетворяет области определения arcosh
               {   printf("erO00000R"); // сообщение об ошибке
                   return 0;
            }
            Y = -acosh(pow(a, 2) - 6 * a * x + 5 * pow(x, 2) + 1);
            printf("Y=%lf",Y);
            break;

        default: // Если ни одно значение блоков case не совпадет, с тем значением, что принял switch()
            printf("Erooor"); // сообщение об ошибке
    }
    return 0;
}
