#include<stdio.h>

int main(){
    int a[9], b[9];
    int up = 0, down = 0;
    int check = 0;
    for(int i=0;i<9;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<9;i++){
        scanf("%d",&b[i]);
    }

    for(int i=0;i<9;i++){
        up += a[i];
        if(up>down){
            check += 1;
        }
        down += b[i];
    }

    if(check>0){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}