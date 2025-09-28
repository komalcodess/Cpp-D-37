#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50];
    int i, dig= 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        if (dig(str[i])) {
            hasDigit = 1;
            break;
        }
    }
if (dig) {
        printf("The string contains a digit.");
} else {
        printf("No digits found in the string.");
}

    return 0;
}
