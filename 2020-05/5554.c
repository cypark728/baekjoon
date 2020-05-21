#include <stdio.h>

int main(){
    int a = 0, b;
    for(int i=0;i<4;i++){
        scanf("%d",&b);
        a = a + b;

    
    }

    printf("%d\n",a/60);
    printf("%d",a%60);




    return 0;
}