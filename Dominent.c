#include<stdio.h>
void dominent(int T){
    for(int i=0;i<T;i++){
        int N;
        scanf("%d",&N);
        int A[N];
        int f[N];
        for(int j=0;j<N;j++){
        scanf("%d",&A[j]);
        f[A[j]]++;
        }
        int flag=0;
        for(int j=0;j<N;j++){
            if(f[j]>2)
            flag=1;
        }
        if(flag==1)
        printf("Yes");
        else printf("No");
    }

}
int main(void){
    int T;
    scanf("%d",&T);
    dominent(T);
}