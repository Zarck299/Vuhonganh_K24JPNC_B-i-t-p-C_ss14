#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
   
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Chuoi vua nhap: %s\n", str);

    int length = strlen(str);
    printf("Do dai cua chuoi la: %d\n", length);

    return 0;
}

