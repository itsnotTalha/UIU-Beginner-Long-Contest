#include<stdio.h>
int main(void){
    int num, n;
    scanf("%d %d",&num, &n);
    for(int i=0;i<n;i++){
        if(num%10==0)
        num/=10;
        else num--;
    }
    printf("%d",num);
}