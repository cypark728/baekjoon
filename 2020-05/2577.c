#include <stdio.h>
#include <string.h>

int main(void){
    int a,b,c;
    int d;
    char e[30];
    int len;
    int f[10]={0,0,0,0,0,0,0,0,0,0};
    char ch[100] = "0123456789";

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    d = a*b*c;

    sprintf(e,"%d",d);
    len = strlen(e);
    for(int i=0;i<len;i++){
        for(int j=0;j<10;j++){
            if(ch[j] == e[i]){
                f[j] = f[j] +1;
            }
        }
    }  

    for(int i=0;i<10;i++){
        printf("%d\n",f[i]);
    }





    return 0;
}