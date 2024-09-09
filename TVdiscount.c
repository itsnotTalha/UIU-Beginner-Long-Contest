#include <stdio.h>

void discOfTV(void) {
    int tv1, tv2, dis1, dis2;
    scanf("%d %d %d %d", &tv1, &tv2, &dis1, &dis2);
    tv1 -= dis1;
    tv2 -= dis2;
    if (tv1 > tv2)
        printf("Second\n");
    else if (tv2 > tv1)
        printf("First\n");
    else 
        printf("Any\n");
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        discOfTV();
    }
    return 0;
}
