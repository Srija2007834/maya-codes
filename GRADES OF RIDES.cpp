#include <stdio.h>

int main() {
    int hurlFactor, spinFactor, speedFactor;
    scanf("%d %d %d", &hurlFactor, &spinFactor, &speedFactor);

    int hurl = hurlFactor > 50;
    int spin = spinFactor > 60;
    int speed = speedFactor > 100;

    int grade;
    if (hurl && spin && speed)
        grade = 10;
    else if (hurl && spin)
        grade = 9;
    else if (spin && speed)
        grade = 8;
    else if (hurl && speed)
        grade = 7;
    else if (hurl || spin || speed)
        grade = 6;
    else
        grade = 5;

    printf("%d
", grade);
    return 0;
}
