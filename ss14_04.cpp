#include <stdio.h>

int main() {
    char chuoi[] = "Hello word";
    char ky_tu;
    int count = 0;

    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &ky_tu);

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == ky_tu) {
            count++;
        }
    }

    printf("So lan xuat hien cua ky tu '%c' trong chuoi la: %d\n", ky_tu, count);

    return 0;
}