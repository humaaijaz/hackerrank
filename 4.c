#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    return (max);
}

int main() {
    int a = 0, b = 0, c = 0, d = 1, ans = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    ans = max_of_four(a, b, c, d);

    printf("%d", ans);
    return 0;
}