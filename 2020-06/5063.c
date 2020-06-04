#include <stdio.h>
int main(){
    int x;
    int a,b,c;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>b-c){
            printf("do not advertise\n");
        }else if(a<b-c){
            printf("advertise\n");
        }else if(a == (b-c)){
            printf("does not matter\n");
        }
    }


    return 0;
}