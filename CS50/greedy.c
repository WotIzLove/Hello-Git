
#include <stdio.h>
#include <math.h>

int main(void)
{
    float f;

    do {
        printf("How much changed is owed?\n");
        scanf("%f",&f);
    } while (f <= 0);

    int n = (f * 100);

    int a = (n/25);
    int b = (n%25/10);
    int c = (n%25%10/5);
    int d = (n%25%10%5/1);

    int count = (a+b+c+d);
    printf("%d", count);
}

