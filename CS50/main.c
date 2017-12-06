#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        printf("Insert your number: ");
        scanf("%d", &h);
    }
    while (h < 1);
    for (int i=0; i<h; i++)
    {
        for (int q=0; q<h-(1+i); q++)
        {
            printf(" ");
        }
        for (int x=0; x<i+2; x++)
        {
            printf("#");
        }
        printf("\n");
    }
}

