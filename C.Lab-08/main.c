#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

float open(int kol, int k, float y_f[k]);
float coordinates(double ds);
float kor ( float x0, float y0,float xt,float yt);
int main(){
    clock_t start, end;
    srand(time(NULL));
    int k=0, n=0, i, kol = 0, l = 0;
    float x0, y0, R, a;
    double dx = rand()%100*0.01;
    start = clock();
    printf("Введите количество точек:\n");
    scanf("%i", &k);
    float x[k], y[k], y_f[k];

    for (i=0;i<k;i++)
    {
        x[i] = coordinates(dx);
        printf("x[%i]=%f\t",i, x[i]);
        y[i] = coordinates(dx);
        printf("y[%i]=%f\n",i, y[i]);

    }

    n = rand() %k;
    x0 = x[n];
    y0 = y[n];

    printf("Введите радиус:\n");
    scanf("%f", &R);

    for(i=0;i<k;i++) {
        float xt=x[i];
        float yt=y[i];
        a = kor(x0,y0,xt,yt);
        if (a<=R){
            printf("Точка принадлежит области.\n");
            y_f[kol] = y[i];
            kol = kol + 1;
            l = 1;
        }
        else
            printf("Точка не прнадлежит области.\n");

    }
    printf("Количсетво точек области:%i\n", kol);

    if (l == 1)
       open(kol, k, y_f);
        end = clock();
    printf("Работа заняла %f секунд.\n", ((double) end - start) / ((double) CLOCKS_PER_SEC));;
        return 0;
}

float coordinates(double ds)
{
    float d;
    d=5-rand()%11+ds;

    return d;
}

float kor (float x0, float y0,float xt,float yt){
    float  c;
    c = sqrt(pow((xt-x0),2)+ pow((yt-y0),2));
    return c;
}

float open(int kol, int k, float y_f[k]){
    int i;
    FILE*f1;
    f1 = (FILE *) fopen("test.txt", "w+");
    if ((f1 = fopen("test.txt", "w")) == NULL)  //Открытие файла для записи
    {
        printf("Ошибка при открытии файла\n");
        exit(1);
    }
    for (i = 0; i < kol; i++)
        fprintf(f1, "%f\n", y_f[i]);

    fclose(f1);
}
