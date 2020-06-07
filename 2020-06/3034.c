#include <stdio.h>
#include <math.h>
int main(void){
    int a,b,c;
    int st;
    double len;
    scanf("%d %d %d",&a,&b,&c);
    len = (b*b) + (c*c);
    len = sqrt(len);
    for(int i=0;i<a;i++){
        scanf("%d",&st);
        if(len>=st){
            printf("DA\n");
        }else{
            printf("NE\n");
        }
    }

    return 0;
}