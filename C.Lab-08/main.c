#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

float open(int kol, int k, float y_f[k], float x_f[k]);
float coordinates(double ds);
float kor ( float x0, float y0,float xt,float yt);
int main(){
    clock_t start, end;
    FILE *t;
    srand(time(NULL));
    int k=0, n=0, i, kol = 0, l = 0;
    float x0, y0, R, a;
    double dx = rand()%100*0.01;
    start = clock();
    printf("Введите количество точек:\n");
    scanf("%i", &k);
    float x[k], y[k], y_f[k], x_f[k];

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
            x_f[kol] = x[i];
            kol = kol + 1;
        }
        else
            printf("Точка не прнадлежит области.\n");

    printf("Количсетво точек области:%i\n", kol);

        t = fopen("time.txt","w+");
        open(kol, k, y_f, x_f);
        end = clock();
        fprintf(t, "%lf\n", (end - start) / CLOCKS_PER_SEC);
        fclose (t);}

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

float open(int kol, int k, float y_f[k], float x_f[k]){
    int i;
    FILE*X;
    FILE*Y;
    X = (FILE *) fopen("x.txt", "w+");
    Y = (FILE *) fopen("y.txt", "w+");
    for (i = 0; i < kol; i++){
        fprintf(X, "%f\n", x_f[i]);
        fprintf(Y, "%f\n", y_f[i]);}

    fclose(X);
    fclose(Y);
}
