#include<stdio.h>
#include<string.h>
int main(void){
    char ch[100]={};
    scanf("%s", ch);
    int count=1;
    for (int i = 1; i < strlen(ch); i++) {
        if (ch[i] == ch[i - 1]) {
            count++;
            if (count >= 7) {
                printf("YES\n");
                return 0;
            }
        } else 
            count = 1; 
              
    }
    printf("NO\n");
}