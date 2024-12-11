#include<stdio.h>
#include<string.h>

int main(){
	char str[15] = {'H','e','l','l','o',' ','w','o','r','l','d'};
	printf("Cac ky tu trong chuoi la: ");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}
