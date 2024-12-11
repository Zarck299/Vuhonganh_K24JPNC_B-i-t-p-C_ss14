#include <stdio.h>
#include <ctype.h> 
int main() {
    char str[100];
    int letterCount = 0;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letterCount++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", letterCount);

    return 0;
}

