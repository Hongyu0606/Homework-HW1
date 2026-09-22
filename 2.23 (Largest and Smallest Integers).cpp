#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;

    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    min = a;

    if (b > max) max = b;
    if (c > max) max = c;

    if (b < min) min = b;
    if (c < min) min = c;

    printf("Largest is %d\n", max);
    printf("Smallest is %d\n", min);

    return 0;
}