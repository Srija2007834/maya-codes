#include <stdio.h>

int main() {
    int units;
    float bill;

    // Input
    scanf("%d", &units);

    // Calculate bill based on slabs
    if (units <= 199) {
        bill = units * 1.20;
    } else if (units >= 200 && units < 400) {
        bill = units * 1.50;
    } else if (units >= 400 && units < 600) {
        bill = units * 1.80;
    } else { // units >= 600
        bill = units * 2.00;
    }

    // Apply surcharge rules
    if (bill > 400) {
        bill = bill + (bill * 0.15);   // 15% surcharge
    } else {
        bill = bill + 100;             // Minimum surcharge Rs. 100
    }

    // Output
printf("%.2f", bill);

    return 0;
}
