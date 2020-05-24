#include <stdio.h>
int main(){
    int a[4], b[4], c[4];
    int check = 0;
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
    scanf("%d %d %d %d",&c[0],&c[1],&c[2],&c[3]);
    for(int i=0;i<4;i++){
        if(a[i]==0){
            check ++;
        }
    }
    if(check == 0){
        printf("E\n");
    }else if(check == 1){
        printf("A\n");
    }else if(check == 2){
        printf("B\n");
    }else if(check == 3){
        printf("C\n");
    }else if(check == 4){
        printf("D\n");
    }
    check = 0;

    for(int i=0;i<4;i++){
        if(b[i]==0){
            check ++;
        }
    }
    if(check == 0){
        printf("E\n");
    }else if(check == 1){
        printf("A\n");
    }else if(check == 2){
        printf("B\n");
    }else if(check == 3){
        printf("C\n");
    }else if(check == 4){
        printf("D\n");
    }
    check = 0;

    for(int i=0;i<4;i++){
        if(c[i]==0){
            check ++;
        }
    }
    if(check == 0){
        printf("E");
    }else if(check == 1){
        printf("A");
    }else if(check == 2){
        printf("B");
    }else if(check == 3){
        printf("C");
    }else if(check == 4){
        printf("D");
    }
    check = 0;


    return 0;
}