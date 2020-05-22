#include <stdio.h>
int main(){
    int a[4];
    int b[4];
    int x=0,y=0;
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
    for(int i=0;i<4;i++){
        x = x + a[i];
        y = y + b[i];
    }

    if(x>y){
        printf("%d",x);
    }else{
        printf("%d",y);
    }

    return 0;
}