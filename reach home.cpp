#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int max_distance = X * 5;

    if (max_distance >= Y)
        printf("YES");
    else
        printf("NO");

    return 0;
}
