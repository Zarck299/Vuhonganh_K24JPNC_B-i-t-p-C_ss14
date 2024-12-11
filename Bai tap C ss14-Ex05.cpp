#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    for (int i = 0; i < strlen(str); i++) {
        if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ') {
            count++;
        }
    }
    printf("So tu trong chuoi: %d\n", count);

    return 0;
}

