#include<stdio.h>

int main(void){
    int a,b;
    int c1=0,c2=0;
    int n1=0,n2=0;
    int i;
    scanf("%d",&a);
    b = a/5;
    c1 = b;
    for(i = a/5; i>=0;i--){
        n1 = a-(5*i);
        if(n1 == 0){
            break;
        }else if(n1>=3){
            n2 = n1%3;
            if(n2 ==0){
                c2 = n1/3;

                break;
            }
        }
        c1--;
    }

    if((i==-1) && (c2==0)){
        printf("-1");
    }else{
        printf("%d",c1 + c2);
    }

    return 0;
}