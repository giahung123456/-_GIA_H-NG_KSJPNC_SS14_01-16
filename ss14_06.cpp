#include <stdio.h>

int main() {
    char str[100];
    int kt = 0;

   
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i]!=' '&&str[i]!='\0'&& str[i] != '\n') {
            kt++; 
        }
    }

  
    printf("So ky tu la chu cai trong chuoi la: %d\n", kt);

    return 0;
}