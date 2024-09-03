#include<stdio.h>
int main (void){
    int w;
    printf("Enter weight amount :");
    scanf("%d",&w);
    if(w>=1&&w<=100){
        if(w%2==0)
        printf("Yes");
        else
        printf("No");
    }
    else printf("Invalid Input!");
}