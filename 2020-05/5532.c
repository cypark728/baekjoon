#include <stdio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    if(b%d==0){
        b = b/d;
    }else{
        b = b / d + 1;
    }

    if(c%e==0){
        c = c / e;
    }else{
        c = c / e + 1;
    }

    if(b>c){
        printf("%d", a - b);
    }else{
        printf("%d", a - c);
    }


    return 0;
}