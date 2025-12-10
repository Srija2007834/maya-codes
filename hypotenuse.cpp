#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    double h = sqrt((x*x) + (y*y));
    printf("%.2f", h);
    
    return 0;
}

