#include <stdio.h>

int main() {
    float height;
    scanf("%f", &height);

    if (height < 150) {
        printf("Person is Dwarf.");
    } else if (height > 150 && height <= 165) {
        printf("Person is average heighted.");
    } else if (height > 165 && height <= 195) {
        printf("Person is taller.");
    } else {
        printf("Abnormal height.");
    }

    return 0;
}
