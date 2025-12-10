#include <stdio.h>
int main() 
{
    int radius;
    float pi = 3.14, area, perimeter;

    // Input
    scanf("%d", &radius);
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    // Output with 2 decimal places
    printf("%.2f", area);
    printf("%.2f", perimeter);
    return 0;
}
