#include <stdio.h>
int main(void){
    int m,d;
    int date[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int a = 0;
    scanf("%d %d",&m,&d);
    m = m -1;
    for(int i=0;i<m;i++){
        a = a + date[i];
    }

    a = (a+d)%7;
    if(a==0){
        printf("SUN");
    }else if(a==1){
        printf("MON");
    }else if(a==2){
        printf("TUE");
    }else if(a==3){
        printf("WED");
    }else if(a==4){
        printf("THU");
    }else if(a==5){
        printf("FRI");
    }else if(a==6){
        printf("SAT");
    }

    return 0;
}