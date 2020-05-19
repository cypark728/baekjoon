#include<stdio.h>
int main(void){
    int a,b,v;
    int n=0,count=0;

    scanf("%d %d %d",&a,&b,&v);

    n = (v-a)%(a-b);
    count = (v-a)/(a-b);

    if(n == 0){
        printf("%d",count+1);
    }else{
        printf("%d",count+2);
    }

    return 0;
}
