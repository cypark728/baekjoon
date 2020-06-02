#include <stdio.h>

int main(){
    int a[28];
    int dummy;
    int index = 0;
    for(int i=0;i<28;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<28;i++){
        for(int j=0;j<27;j++){
            if(a[j]>a[j+1]){
                dummy = a[j];
                a[j] = a[j+1];
                a[j+1] = dummy;
            }
        }
    }
    for(int i=0;i<30;i++){
        if(a[index]!=(i+1)){
            printf("%d\n",i+1);
        }else{
            index ++;
        }
    }

    return 0;
}