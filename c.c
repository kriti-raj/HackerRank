#include <stdio.h>

int main()
{
    int a, b;
    float c, d;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%f\n", &c);
    scanf("%f\n", &d);
    printf("%d\t%d\n", a + b, a - b);
    printf("%.1f\t%.1f", c + d, c - d);

    return 0;
}