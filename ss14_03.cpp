#include <stdio.h>

int main() {
    char str[] = "Hello, World";
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    printf("Chuoi dao nguoc la: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}