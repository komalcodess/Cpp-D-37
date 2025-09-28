#include <stdio.h>
#include <string.h>

int main() {
    char str[58];

    printf("Enter a string: ");
    gets(str);

    if (str[0] ==str[strlen(str) - 1]) {
        printf("First and last characters are the same");
    } else {
        printf("First and last characters are different");
    }

    return 0;
}
