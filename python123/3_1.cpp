#include <stdio.h>
int main() {
    int i, n;
    double sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
        sum += 1.0 / (2 * i - 1);
    printf("%.4f\n", sum);
    return 0;
}