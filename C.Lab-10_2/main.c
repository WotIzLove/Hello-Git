#include <string.h>
#include <stdlib.h>
#include <stdio.h>



    struct automobile
    {
        char name[100];
        char color[100];
        int weight;
        int prg;
    };

    int main() {
        int n, i;

    printf("Введите количество машин:");
    scanf("%i", &n);

        struct automobile* box = (struct automobile*)malloc(sizeof(struct automobile) * n);

        for(i=0; i<n; i++)
        {
            printf("Введите прогон:\n");
            scanf("%d", &box[i].prg);

            printf("Введите марку машины::\n");
            scanf("%s", box[i].name);

            printf("Введите вес машины:\n");
            scanf("%d", &box[i].weight);

            printf("Введите цвет машины:\n");
            scanf("%s", box[i].color);
        }

            for(i=0; i<n; i++){

    printf("Марка машины: %s Цвет: %s Вес: %d Прогон: %d \n", box[i].name,  box[i].color, box[i].weight, box[i].prg);}

    free(box);

    return 0;
}