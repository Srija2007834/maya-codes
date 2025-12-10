#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int extra = (X > Y) ? (X - Y) : 0;
    printf("%d", extra);

    return 0;
}
