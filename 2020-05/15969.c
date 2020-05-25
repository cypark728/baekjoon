#include <stdio.h>
int main(){
    int n,a;
    int min = 1001, max = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a<min){
            min = a;
        }
        if(a>max){
            max = a;
        }
    }
    printf("%d",max-min);

    return 0;
}