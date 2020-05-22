#include <stdio.h>

int main(){
    int a,b,c,d,e;
    int x = 0, y = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    x = a * e;
    if(e<c){
        y = b;
    }else{
        y = b + (e-c)*d; 
    }

    if(x<y){
        printf("%d",x);
    }else{
        printf("%d",y);
    }

    return 0;
}