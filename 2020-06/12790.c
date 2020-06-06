#include <stdio.h>
int main(){
    int b;
    int a[8];
    int total;
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        scanf("%d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
        a[0] += a[4];
        a[1] += a[5];
        a[2] += a[6];
        a[3] += a[7];
        if(a[0]<=1){
            a[0] = 1;
        }
        if(a[1]<=1){
            a[1] = 1;
        }
        if(a[2]<=0){
            a[2] = 0;
        }
        total = a[0] + a[1] * 5 + a[2] * 2 + a[3] * 2;
        printf("%d\n",total);
    }


    return 0;
}
