#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input: three numbers in a single line
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest
    int largest = num1;   // assume first is largest

    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    // Output the largest number
    printf("%d", largest);

    return 0;
}
