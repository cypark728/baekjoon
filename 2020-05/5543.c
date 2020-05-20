#include <stdio.h>
int main(){
    int a, b;
    int bug=2000, dir=2000;
    for(int i=0;i<3;i++){
        scanf("%d", &a);
        if(a<bug){
            bug = a;
        }
    }
    for(int j=0;j<2;j++){
        scanf("%d", &b);
        if(b<dir){
            dir = b;
        }
    }
    printf("%d", bug + dir - 50);


    return 0;
}