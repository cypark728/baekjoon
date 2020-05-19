#include<stdio.h>
int main(void){
    int a[10000];
    int n,x;
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        if(a[j]<x){
            printf("%d ",a[j]);
        }
    }
    return 0;
}