#include <stdio.h>

int main() {
    char str[100];
    
    printf("Nhap vao mot chuoi: ");
    fgets(str, size_t(str), stdin);
    int kt=0;
     for(int i = 0;str[i] != '\0';i++) {
        kt++;
    }
    printf("Chuoi ban da nhap la: %s\n", str);
    printf("Do dai chuoi la: %d\n", kt);
    return 0;
}