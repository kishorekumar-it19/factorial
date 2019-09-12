#include <stdio.h>
int main() {
    int i, n, k1 = 0, k2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", k1);
        nextTerm = k1 + k2;
        k1 = k2;
        k2 = nextTerm;
    }
    return 0;
}
