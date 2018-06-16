#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
   //Объявляем переменную-указателб на int
    int *p = NULL;

    //Объявляем переменные
    int i;
    int n;

    //Вводим n
    printf("Введите значение n:");
    scanf("%i", &n);

    //Выделяем память под хранение n элементов типа int
    p  = (int *) malloc(n * sizeof(int));

    //Записываем значения
    for (i = 1; i<n+1; i++)
    {
        p[i] = i*i;
    }

    //Выводим значения
    for (i = 1; i<n+1; i++)
    {
        printf("The value id: %d\n", p[i]);
    }

    //Освобождаем место
    for(i = 1;i < n+1; i++)
        free(p[i]);
    free(p);

    return 0;
}