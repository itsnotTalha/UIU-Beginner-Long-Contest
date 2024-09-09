#include<stdio.h>
void greatAvg(void){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    float avg;
    avg=(float) (A+B)/2;
    if(avg>C)
    printf("YES\n");
    else printf("NO\n");
}
int main(void){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        greatAvg();
    }
    return 0;
}