#include <stdio.h>

void popCount(void) {
    int X, Y, Z;  // X = initial population, Y = people who left, Z = people who immigrated
    scanf("%d %d %d", &X, &Y, &Z);
    int finalPopulation = X - Y + Z;
    printf("%d\n", finalPopulation);  // Print the final population followed by a newline
}

int main(void) {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read the number of test cases
    for (int i = 0; i < T; i++) {
        popCount();  // Call the function for each test case
    }
    return 0;
}
