#include<stdio.h>
int main(void){

    int a[100];
    int b[1000000];
    int n,m;
    int sum,max=0,ch=0;

    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int j=0;j<n-2;j++){
        for(int k=j+1;k<n-1;k++){
            for(int l=k+1;l<n;l++){
                sum = a[j]+a[k]+a[l];
                if(sum <= m){
                    b[ch] = sum;
                    ch++;
                }
            }
        }
    }

    for(int q=0;q<ch;q++){
        if(b[q]>max){
            max = b[q];
        }
    }

    printf("%d",max);
    return 0;
}