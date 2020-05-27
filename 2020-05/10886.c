#include <stdio.h>
int main(){
    int a[101];
    int b,c,d=0,e=0;
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        scanf("%d",&c);
        if(c==1){
            d += 1;
        }else if(c==0){
            e += 1;
        }
    }
    if(d>e){
        printf("Junhee is cute!");
    }else{
        printf("Junhee is not cute!");
    }


    return 0;
}