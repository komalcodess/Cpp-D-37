#include <stdio.h>
#include <ctype.h>

int main() {
    char str[58];
    printf("Enter a string: ");
    gets(str);

    if (isupper(str[0])) {
        printf("The string starts with an uppercase letter.");
    } else {
        printf("The string starts with a lowercase letter.");
    }

    return 0;
}
