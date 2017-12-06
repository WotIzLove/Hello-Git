#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char s[i];
    scanf("%c", s);
    for ( i=0; i<strlen(s); i++){
        if (s[i] > 64 && s[i] < 91 )
            printf("%c",s[i]);
    }
}

