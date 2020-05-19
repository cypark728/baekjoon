#include <stdio.h>
#include <math.h>

int main(void){
    int a,b;
    int c;
    int aa =0,bb=0,cc =0;
    scanf("%d %d",&a,&b);
    c = a-b;
    for(int i=1;i<=13;i++){
        aa = aa + a/pow(5,i);
        bb = bb + b/pow(5,i);
        cc = cc + c/pow(5,i);
    }
    printf("%d",(aa-bb));
    return 0;
}


