#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    ch = tolower(ch); // convert to lowercase for easy comparison

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("VOWEL");
    else
        printf("CONSONANT");

    return 0;
}
