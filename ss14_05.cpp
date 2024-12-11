#include <stdio.h>

int main() {
    char str[100];
    int dem = 0;
    int kt = 0;
//|| str[i] == '\t'
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' ) {
            kt = 0; 
        } else if (kt == 0) {
            kt = 1; 
            dem++;
        }
    }

    printf("So tu trong chuoi la: %d\n", dem);

    return 0;
}