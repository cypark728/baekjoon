#include <stdio.h>
int main(){
    int a, b = 0,c = 0;
    scanf("%d", &a);
    a = 1000 - a;
    c = c + a/500;
    a = a - 500*(a/500);

    c = c+a/100;
    a = a - 100*(a/100);

    c = c + a/50;
    a = a - 50*(a/50);

    c = c + a/10;
    a = a - 10*(a/10);

    c = c + a/5;
    a = a - 5*(a/5);

    c = c + a/1;
    a = a - 1*(a/1);

    printf("%d",c);

    return 0;
}