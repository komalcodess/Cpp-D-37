#include <stdio.h>
#include <string.h>

int main() {
    char str[10];

    printf("Enter yes or no: ");
    scanf("%s", str);

if (strcmp(str, "yes")==0) {
        printf("You chose YES");
    } else if (strcmp(str, "no") ==0) {
        printf("You chose NO");
} else {
        printf("Invalid input");
    }

    return 0;
}
