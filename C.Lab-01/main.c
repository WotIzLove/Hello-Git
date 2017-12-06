#include <stdio.h> //Импортируем библиотеки
#include <math.h>

int main()
{
    double a, x, G, F, Y, pi;
    printf("Введите x:");   //Вводим x и a
    scanf("%lf", &x);
    printf("Введите a: ");
    scanf("%lf", &a);
    G = 3 * (-3 * pow(a, 2) + 2 * a * x + 21 * pow(a, 2)) / (35 * pow(a, 2) + 37 * a * x + 6 * pow(x, 2)); //Находим значение G
    printf("G=%lf\n\n", G); //Выводим значение G

    printf("Выведите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    F = 1 / sin(40 * pow(a, 2) + 9 * a * x - 20 * pow(x, 2) - pi / 2);
    printf("F=%lf\n\n", F);


    printf("Выведите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    Y = -acosh(pow(a, 2) - 6 * a * x + 5 * pow(x, 2) + 1);
    printf("Y=%lf\n\n", Y);

    return 0;
}