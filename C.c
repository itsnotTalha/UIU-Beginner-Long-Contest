#include <stdio.h>

int main(void) {
    long long n, m, a;
    
    scanf("%lld %lld %lld", &n, &m, &a);
    long long numFlagstonesLength = (n + a - 1) / a;
    long long numFlagstonesWidth = (m + a - 1) / a;
    long long totalFlagstones = numFlagstonesLength * numFlagstonesWidth;
    printf("%lld\n", totalFlagstones);
}
