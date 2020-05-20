#include <stdio.h>
int main(){
    int a, res=0;
    int b[5];
    scanf("%d", &a);
    scanf("%d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4]);
    for(int i=0;i<5;i++){
        if(b[i]==a){
            res += 1;
        }
    }
    printf("%d",res);
    return 0;
}