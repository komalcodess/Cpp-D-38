#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    if (str[strlen(str)-1]=='s') {
        printf("The string ends with 's'");
    } else {
        printf("The string does not end with 's'");
    }

    return 0;
}
